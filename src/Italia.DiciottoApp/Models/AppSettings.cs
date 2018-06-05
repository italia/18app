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
    }
}