using System;

namespace Italia.DiciottoApp.Models
{
    public class LoginException : Exception
    {
        public LoginException(string message) : base(message)
        {
        }
    }
}
