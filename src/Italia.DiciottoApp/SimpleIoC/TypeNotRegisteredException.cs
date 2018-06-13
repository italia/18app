using System;

namespace Italia.DiciottoApp.SimpleIoc
{
    public class TypeNotRegisteredException : Exception
    {
        public TypeNotRegisteredException(string message)
            : base(message)
        {
        }
    }
}