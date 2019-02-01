namespace Italia.DiciottoApp
{
    public interface IInstabug
    {
        //void Initialize(InstabugOptions options);

        void Show();

        void IdentifyUser(string email, string name);

        void SetUserAttribute(string attributeName, string attributeValue);

        void Logout();
    }
}
