using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class BaseViewModel: ObservableObject
    {
        #region Properties

        bool isBusy;
        public bool IsBusy
        {
            get => isBusy;
            set => SetProperty(ref isBusy, value, onChanged: () => OnPropertyChanged(nameof(IsNotBusy)));
        }

        public bool IsNotBusy => !IsBusy;

        public double InitialCredit => 500.00;

        private double actualCredit;
        public double ActualCredit
        {
            get => actualCredit;
            set => SetProperty(ref actualCredit, value);
        }

        public double UsedPercentage => (InitialCredit - ActualCredit) / InitialCredit;

        public string UserCredit => $"{ActualCredit.ToString("###.00")}€";

        private string unreadMessages;
        public string UnreadMessages
        {
            get => unreadMessages;
            set => SetProperty(ref unreadMessages, value);
        }

        #endregion

        public BaseViewModel()
        {
            GetUserStatus();
        }

        private void GetUserStatus()
        {
            // TODO: get data from service
            Random rnd = new Random(DateTime.Now.Millisecond);
            ActualCredit = 50.00 + rnd.Next(0, 450);
            UnreadMessages = "2";
        }

    }
}
