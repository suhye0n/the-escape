using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using UnityEngine.UI;
using TMPro;

public class HPHandler : NetworkBehaviour
{
    [Networked(OnChanged = nameof(OnHPChanged))]
    byte HP { get; set; }

    [Networked(OnChanged = nameof(OnStateChanged))]
    public bool isDead { get; set; }

    bool isInitialized = false;

    const byte startingHP = 100;

    public Color uiOnHitColor;
    public Color uiOnHealColor;
    public Image uiOnHitImage;

    public MeshRenderer bodyMeshRenderer;
    Color defaultMeshBodyColor;

    public GameObject playerModel;
    public GameObject deathGameObjectPrefab;

    public bool skipSettingStartValues = false;

    public TMP_Text HPtext;

    //Other components
    HitboxRoot hitboxRoot;
    CharacterMovementHandler characterMovementHandler;
    NetworkInGameMessages networkInGameMessages;
    NetworkPlayer networkPlayer;

    private void Awake()
    {
        characterMovementHandler = GetComponent<CharacterMovementHandler>();
        hitboxRoot = GetComponentInChildren<HitboxRoot>();
        networkInGameMessages = GetComponent<NetworkInGameMessages>();
        networkPlayer = GetComponent<NetworkPlayer>();
    }

    // Start is called before the first frame update
    void Start()
    {
        if (!skipSettingStartValues)
        {
            HP = startingHP;
            isDead = false;
        }

        defaultMeshBodyColor = bodyMeshRenderer.material.color;

        isInitialized = true;

        HPtext.text = $"HP: {startingHP}";
    }

    private void Update()
    {
        HPtext.text = $"HP: {HP}";
    }
    IEnumerator OnHitCO()
    {
        if (Object.HasInputAuthority)
            uiOnHitImage.color = uiOnHitColor;

        yield return new WaitForSeconds(0.3f);

        if (Object.HasInputAuthority && !isDead)
            uiOnHitImage.color = new Color(0, 0, 0, 0);
    }

    IEnumerator OnHealCO()
    {
        if (Object.HasInputAuthority)
            uiOnHitImage.color = uiOnHealColor;

        yield return new WaitForSeconds(0.3f);

        if (Object.HasInputAuthority && !isDead)
            uiOnHitImage.color = new Color(0, 0, 0, 0);
    }

    IEnumerator ServerReviveCO()
    {
        //부활 패널 추가?

        yield return new WaitForSeconds(1.0f);

        characterMovementHandler.RequestRespawn();
    }


    //Function only called on the server
    public void OnTakeDamage(string damageCausedByPlayerNickname, byte damageAmount)
    {
        //Only take damage while alive
        if (isDead)
            return;

        //Ensure that we cannot flip the byte as it can't handle minus values.
        if (damageAmount > HP)
            damageAmount = HP;

        HP -= damageAmount;

        Debug.Log($"{Time.time} {transform.name} took damage got {HP} left ");

        //Player died
        if (HP <= 0)
        {
            networkInGameMessages.SendInGameRPCMessage(damageCausedByPlayerNickname, $"Killed <b>{networkPlayer.nickName.ToString()}</b>");

            Debug.Log($"{Time.time} {transform.name} died");

            StartCoroutine(ServerReviveCO());

            isDead = true;
        }
    }

    public void GetRecoveryItem(byte recoveryAmount) 
    { 
        //Only take damage while alive
        if (isDead)
            return;

        //Ensure that we cannot flip the byte as it can't handle minus values.
        if (HP + recoveryAmount > 100)
        {
            HP = 100;
            return;
        }

        HP += recoveryAmount;
    }
    static void OnHPChanged(Changed<HPHandler> changed)
    {
        Debug.Log($"{Time.time} OnHPChanged value {changed.Behaviour.HP}");

        byte newHP = changed.Behaviour.HP;

        //Load the old value
        changed.LoadOld();

        byte oldHP = changed.Behaviour.HP;

        //Check if the HP has been decreased
        if (newHP < oldHP)
            changed.Behaviour.OnHPReduced();
        else if (newHP > oldHP)
            changed.Behaviour.OnHPRecovery();
    }

    private void OnHPReduced()
    {
        if (!isInitialized)
            return;
        HPtext.text = $"HP: {HP}";
        StartCoroutine(OnHitCO());  
    }

    private void OnHPRecovery()
    {
        if (!isInitialized)
            return;
        HPtext.text = $"HP: {HP}";
        StartCoroutine(OnHealCO());
    }

    static void OnStateChanged(Changed<HPHandler> changed)
    {
        Debug.Log($"{Time.time} OnStateChanged isDead {changed.Behaviour.isDead}");

        bool isDeadCurrent = changed.Behaviour.isDead;

        //Load the old value
        changed.LoadOld();

        bool isDeadOld = changed.Behaviour.isDead;

        //Handle on death for the player. Also check if the player was dead but is now alive in that case revive the player.
        if (isDeadCurrent)
            changed.Behaviour.OnDeath();
        else if (!isDeadCurrent && isDeadOld)
            changed.Behaviour.OnRevive();
    }

    private void OnDeath()
    {
        Debug.Log($"{Time.time} OnDeath");

        playerModel.gameObject.SetActive(false);
        hitboxRoot.HitboxRootActive = false;
        characterMovementHandler.SetCharacterControllerEnabled(false);

        Instantiate(deathGameObjectPrefab, transform.position, Quaternion.identity);
    }

    private void OnRevive()
    {
        Debug.Log($"{Time.time} OnRevive");

        if (Object.HasInputAuthority)
            uiOnHitImage.color = new Color(0, 0, 0, 0);

        playerModel.gameObject.SetActive(true);
        hitboxRoot.HitboxRootActive = true;
        characterMovementHandler.SetCharacterControllerEnabled(true);
    }

    public void OnRespawned()
    {
        //Reset variables
        HP = startingHP;
        isDead = false;
    }
}
