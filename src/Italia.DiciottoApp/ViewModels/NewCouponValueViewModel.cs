using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class NewCouponValueViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Nuovo buono: valore";

        public AppArea AppArea => AppArea.NewCoupon;

        public string ContentHeader => "Scegli la categoria";

        public IEnumerable<Categoria> Categories => Models.Categories.List;

        #endregion

        public NewCouponValueViewModel() : base()
        {
        }

    }
}