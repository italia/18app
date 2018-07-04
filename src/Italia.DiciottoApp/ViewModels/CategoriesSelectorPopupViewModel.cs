using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class CategoriesSelectorPopupViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Categorie";

        public AppArea AppArea => AppArea.None;

        public IEnumerable<Categoria> Categories => Models.Categories.List;

        #endregion

        public CategoriesSelectorPopupViewModel() : base()
        {
        }

    }
}