using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.ViewModels
{
    public class CouponViewModel : BaseViewModel
    {
        private readonly Color red = new Color(r: .82, g: .01, b: .11);
        private readonly Color green = new Color(r: 0.13, g: 0.69, b: 0.45);

        #region Properties

        private string pageTitle;
        public string PageTitle
        {
            get => pageTitle;
            set => SetProperty(ref pageTitle, value);
        }

        public AppArea AppArea => AppArea.NewCoupon;

        public bool ShopIsVisible => (Coupon?.Shop != null);

        public string CouponStatus =>
            Coupon == null ? string.Empty
                           : Coupon.Spent ? $"Buono utilizzato il {Coupon.SpentDateTime.ToString("gg MMMM aa")} alle ore {Coupon.SpentDateTime.ToString("mm.hh")}"
                           : $"Il nuovo buono è stato creato correttamente";

        public Color CouponStatusTextColor => (Coupon?.Spent ?? false) ? red : green;

        private Coupon coupon;
        public Coupon Coupon
        {
            get => coupon;
            set => SetProperty(ref coupon, value);
        }

        #endregion

        public CouponViewModel() : base()
        {
        }

    }
}