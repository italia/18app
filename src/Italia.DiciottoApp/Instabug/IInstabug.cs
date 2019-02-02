namespace Italia.DiciottoApp
{
    public interface IInstabug
    {
        void IdentifyUser(string email, string name);

        void SetUserAttribute(string attributeName, string attributeValue);

        void Logout();
    }
}
