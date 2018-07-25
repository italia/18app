using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class MunicipalitiesSelectorPopupViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Comuni";

        public AppArea AppArea => AppArea.None;

        public IEnumerable<Categoria> Categories => Models.Categories.List;

        #endregion

        public MunicipalitiesSelectorPopupViewModel(): base()
        {
        }
    }
}
