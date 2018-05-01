using Italia.DiciottoApp.Interfaces;
using Plugin.Settings;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class AppSettings: IAppSettings
    {
        public bool UserLogged
        {
            get => CrossSettings.Current.GetValueOrDefault("UserLogged", false);
            set => CrossSettings.Current.AddOrUpdateValue("UserLogged", value);
        }
    }
}