using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class NewCouponViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Nuovo buono: categoria";

        public AppArea AppArea => AppArea.NewCoupon;

        #endregion

        public NewCouponViewModel() : base()
        {
        }

    }
}