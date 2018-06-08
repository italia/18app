using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class NewCouponViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle { get; set; } = "Nuovo buono: categoria";

        public AppArea AppArea { get; set; } = AppArea.NewCoupon;

        #endregion

        public NewCouponViewModel() : base()
        {

        }

    }
}