﻿using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels.Interfaces
{
    public interface ISelectCategory
    {
        Categoria SelectedCategory { get; set; }
        bool AllCategoriesSelected { get; set; }

        Task GetOnlineShopsAsync(Categoria categoria, bool allSelected);
    }
}
