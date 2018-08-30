using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    public interface ISelectMunicipality
    {
        Municipality SelectedMunicipality { get; set; }

        Task SelectMunicipalityAsync(Municipality municipality);
    }
}
