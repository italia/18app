using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class UserProfileViewModel : BaseViewModel
    {
        #region Constants

        private static readonly string BIRTH_DATE_NA = "Data di nascita non disponibile";
        private static readonly string BIRTH_PLACE_NA = "Comune di nascita non disponibile";

        #endregion

        #region Properties

        public string PageTitle => "Il tuo profilo";

        public AppArea AppArea => AppArea.None;

        public string CodFisc => Settings.UserCodFisc.Substring(0, 3) + " " +
                                 Settings.UserCodFisc.Substring(3, 3) + " " +
                                 Settings.UserCodFisc.Substring(6, 5) + " " +
                                 Settings.UserCodFisc.Substring(11, 5);

        public bool IsCodFiscAvailable => !string.IsNullOrWhiteSpace(Settings.UserCodFisc);

        public string BirthDate
        {
            get
            {
                return $"{Settings.UserBirthDate?.ToString("dd MMMM yyyy") ?? BIRTH_DATE_NA}";
            }
        }

        public string BirthPlace
        {
            get
            {
                string birthPlace = BIRTH_PLACE_NA;
                Comune comune = Comune.List.FirstOrDefault(m => (m.Nome == Settings.UserBirthCity || m.NomeAlternativo == Settings.UserBirthCity));

                if (comune != null)
                {
                    birthPlace = comune.NomeCompleto;
                    if (!String.IsNullOrWhiteSpace(comune.CodiceProvincia))
                    {
                        birthPlace += $" ({comune.CodiceProvincia})";
                    }
                }
                return birthPlace.TrimStart();
            }
        }

        public bool IsBirthDatePlaceAvailable => !(BirthDate == BIRTH_DATE_NA && BirthPlace == BIRTH_PLACE_NA);

        public string ResidenceAddress => Settings.UserResidenceAddress;

        public bool IsResidenceAddressAvailable => !string.IsNullOrWhiteSpace(Settings.UserResidenceAddress);

        public string ResidenceZipCityProvince
        {
            get
            {
                string residenceZipCityProvince = $"{Settings.UserResidenceZip} {Settings.UserResidenceCity}";
                if (!string.IsNullOrWhiteSpace(Settings.UserBirthProvince))
                {
                    residenceZipCityProvince += $" ({Settings.UserBirthProvince})";
                }
                return residenceZipCityProvince.TrimStart();
            }
        }

        // => $"{Settings.UserResidenceZip} {Settings.UserResidenceCity} ({Settings.UserResidenceProvince})";

        public bool IsResidenceZipCityProvinceAvailable => !string.IsNullOrWhiteSpace(ResidenceZipCityProvince);

        public bool IsResidenceAvailable => !(string.IsNullOrWhiteSpace(Settings.UserResidenceAddress) && string.IsNullOrWhiteSpace(ResidenceZipCityProvince));

        public string PhoneNumber => Settings.UserPhoneNumber;

        public bool IsPhoneNumberAvailable => !string.IsNullOrWhiteSpace(Settings.UserPhoneNumber);

        public string Email => Settings.UserEmail;

        public bool IsEmailAvailable => !string.IsNullOrWhiteSpace(Settings.UserEmail);

        public bool IsContactAvailable => !(string.IsNullOrWhiteSpace(Settings.UserPhoneNumber) && string.IsNullOrWhiteSpace(Settings.UserEmail));

        public string SpidIdPImage => IdPs.ImageName(Settings.UserSpidIdPIndex);

        #endregion

        public UserProfileViewModel() : base()
        {
        }
    }
}
