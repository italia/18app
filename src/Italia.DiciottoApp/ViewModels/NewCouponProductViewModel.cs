using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class NewCouponProductViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Nuovo buono: prodotto";

        public AppArea AppArea => AppArea.NewCoupon;

        public string ContentHeader => "Scegli la categoria";

        public IEnumerable<Categoria> Categories => Models.Categories.List;

        #endregion

        public NewCouponProductViewModel() : base()
        {
        }

    }
}