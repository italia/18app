using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels.Interfaces
{
    public interface ISelectMunicipality
    {
        Comune SelectedMunicipality { get; set; }

        Task SelectMunicipalityAsync(Comune municipality);
    }
}
