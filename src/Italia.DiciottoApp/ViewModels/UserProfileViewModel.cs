using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class UserProfileViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Il tuo profilo";

        public AppArea AppArea => AppArea.None;

        public string CodFisc => Settings.UserCodFisc.Substring(0, 3) + " " +
                                 Settings.UserCodFisc.Substring(3, 3) + " " +
                                 Settings.UserCodFisc.Substring(6, 5) + " " +
                                 Settings.UserCodFisc.Substring(11, 5) ;

        public bool IsCodFiscAvailable => !string.IsNullOrWhiteSpace(Settings.UserCodFisc);

        public string BirthDatePlace => $"{Settings.UserBirthDate} {Settings.UserBirthCity} ({Settings.UserBirthProvince})";

        public bool IsBirthDatePlaceAvailable => !string.IsNullOrWhiteSpace(BirthDatePlace);

        public string ResidenceAddress => Settings.UserResidenceAddress;

        public bool IsResidenceAddressAvailable => !string.IsNullOrWhiteSpace(Settings.UserResidenceAddress);

        public string ResidenceZipCityProvince => $"{Settings.UserResidenceZip} {Settings.UserResidenceCity} ({Settings.UserResidenceProvince})";

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
