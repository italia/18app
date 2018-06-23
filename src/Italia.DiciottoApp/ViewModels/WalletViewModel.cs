
using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class WalletViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "I tuoi buoni";

        public AppArea AppArea => AppArea.Wallet;

        #endregion

        public WalletViewModel() : base()
        {
        }

    }
}