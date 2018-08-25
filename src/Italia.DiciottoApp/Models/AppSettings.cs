using Plugin.Settings;
using Plugin.Settings.Abstractions;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    /// <summary>
    /// This is the Settings static class that can be used in your Core solution or in any
    /// of your client applications. All settings are laid out the same exact way with getters
    /// and setters. 
    /// </summary>
    public static class Settings
    {
        private static ISettings AppSettings => CrossSettings.Current;

        public static bool UserLogged
        {
            get => AppSettings.GetValueOrDefault("UserLogged", false);
            set => AppSettings.AddOrUpdateValue("UserLogged", value);
        }

        public static string UserId
        {
            get => AppSettings.GetValueOrDefault("UserId", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserId", value);
        }

        public static string UserName
        {
            get => AppSettings.GetValueOrDefault("UserName", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserName", value);
        }

        public static string UserSurname
        {
            get => AppSettings.GetValueOrDefault("UserSurname", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserSurname", value);
        }

        public static string UserCodFisc
        {
            get => AppSettings.GetValueOrDefault("UserCodFisc", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserCodFisc", value);
        }

        public static string UserPhoneNumber
        {
            get => AppSettings.GetValueOrDefault("UserPhoneNumber", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserPhoneNumber", value);
        }

        public static string UserEmail
        {
            get => AppSettings.GetValueOrDefault("UserEmail", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserEmail", value);
        }

        public static string UserBirthDate
        {
            get => AppSettings.GetValueOrDefault("UserBirthDate", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserBirthDate", value);
        }

        public static string UserBirthCity
        {
            get => AppSettings.GetValueOrDefault("UserBirthCity", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserBirthCity", value);
        }

        public static string UserBirthProvince
        {
            get => AppSettings.GetValueOrDefault("UserBirthProvince", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserBirthProvince", value);
        }

        public static string UserResidenceAddress
        {
            get => AppSettings.GetValueOrDefault("UserResidenceAddress", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserResidenceAddress", value);
        }

        public static string UserResidenceZip
        {
            get => AppSettings.GetValueOrDefault("UserResidenceZip", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserResidenceZip", value);
        }

        public static string UserResidenceCity
        {
            get => AppSettings.GetValueOrDefault("UserResidenceCity", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserResidenceCity", value);
        }

        public static string UserResidenceProvince
        {
            get => AppSettings.GetValueOrDefault("UserResidenceProvince", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserResidenceProvince", value);
        }

        public static int UserSpidIdPIndex
        {
            get => AppSettings.GetValueOrDefault("UserSpidIdPIndex", (int)IdP.None);
            set => AppSettings.AddOrUpdateValue("UserSpidIdPIndex", value);
        }

    }
}