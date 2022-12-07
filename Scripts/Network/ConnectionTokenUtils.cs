using System;


/// <summary>
/// Fusion Connection Token Utility methods
/// </summary>
public static class ConnectionTokenUtils
{
    /// <summary>
    /// Create new random Token
    /// </summary>
    public static byte[] NewToken() => Guid.NewGuid().ToByteArray();

    /// <summary>
    /// Converts a Token into a Hash format
    /// </summary>
    /// <param name="token">Token to be hashed</param>
    /// <returns>Token hash</returns>
    public static int HashToken(byte[] token) => new Guid(token).GetHashCode();

    /// <summary>
    /// Converts a Token into a String
    /// </summary>
    /// <param name="token">Token to be parsed</param>
    /// <returns>Token as a string</returns>
    public static string TokenToString(byte[] token) => new Guid(token).ToString();
}
