using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class BaseViewModel: INotifyPropertyChanged
    {
        public event PropertyChangedEventHandler PropertyChanged;

        protected void OnNotifyPropertyChanged([CallerMemberName] String propertyName = "")
        {
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
        }

        #region Properties

        public double InitialCredit { get; } = 500.00;

        public double UsedPercentage { get => (InitialCredit - ActualCredit) / InitialCredit;  }

        public string UserCredit { get => $"{ActualCredit.ToString("###.00")}€"; }

        private double actualCredit;
        public double ActualCredit
        {
            get
            {
                return actualCredit;
            }

            set
            {
                if (value != actualCredit)
                {
                    actualCredit = value;
                    OnNotifyPropertyChanged();
                }
            }
        }

        private string unreadMessages;
        public string UnreadMessages
        {
            get
            {
                return unreadMessages;
            }

            set
            {
                if (value != unreadMessages)
                {
                    unreadMessages = value;
                    OnNotifyPropertyChanged();
                }
            }
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
