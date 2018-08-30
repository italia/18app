using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    public interface ISelectCategory
    {
        Categoria SelectedCategory { get; set; }
        bool AllCategoriesSelected { get; set; }

        Task SelectCategoryAsync(Categoria categoria, bool allSelected);
    }
}
