using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Utils;
using Plugin.Settings;
using Plugin.Settings.Abstractions;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    /// <summary>
    /// This is the Settings static class that can be used in your Core solution or in any
    /// of your client applications. All settings are laid out the same exact way with getters
    /// and setters. 
    /// </summary>
    public static class Settings
    {
        private static ISettings AppSettings => CrossSettings.Current;

        public static bool IsProductionEnvironment
        {
            get => AppSettings.GetValueOrDefault("IsProductionEnvironment", true);
            set => AppSettings.AddOrUpdateValue("IsProductionEnvironment", value);
        }

        public static bool UserLogged
        {
            get => AppSettings.GetValueOrDefault("UserLogged", false);
            set => AppSettings.AddOrUpdateValue("UserLogged", value);
        }

        public static string FEDSecureTokenValue
        {
            get => AppSettings.GetValueOrDefault("FEDSecureTokenValue", string.Empty);
            set => AppSettings.AddOrUpdateValue("FEDSecureTokenValue", value);
        }

        public static string UserId
        {
            get => AppSettings.GetValueOrDefault("UserId", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserId", value);
        }

        public static string UserCodFisc
        {
            get => AppSettings.GetValueOrDefault("UserCodFisc", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserCodFisc", value);
        }

        public static string UserAnnoRif
        {
            get => AppSettings.GetValueOrDefault("UserAnnoRif", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserAnnoRif", value);
        }

        public static string UserName
        {
            get => AppSettings.GetValueOrDefault("UserName", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserName", value);
        }

        public static string UserSurname
        {
            get => AppSettings.GetValueOrDefault("UserSurname", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserSurname", value);
        }

        public static string UserGender
        {
            get => AppSettings.GetValueOrDefault("UserGender", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserGender", value);
        }

        public static DateTime? UserBirthDate
        {
            get => DateConverter.FromString(AppSettings.GetValueOrDefault("UserBirthDate", null));
            set => AppSettings.AddOrUpdateValue("UserBirthDate", DateConverter.FromDateTime(value));
        }

        public static string UserBirthCity
        {
            get => AppSettings.GetValueOrDefault("UserBirthCity", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserBirthCity", value);
        }

        public static string UserBirthProvince
        {
            get => AppSettings.GetValueOrDefault("UserBirthProvince", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserBirthProvince", value);
        }

        public static string UserResidenceCity
        {
            get => AppSettings.GetValueOrDefault("UserResidenceCity", string.Empty);
            set => AppSettings.AddOrUpdateValue("UserResidenceCity", value);
        }

        public static string UserResidenceProvince
        {
            get => AppSettings.GetValueOrDefault("UserResidenceProvince", string.Empty);
            set => AppSettings.AddOrUpdateValue("UserResidenceProvince", value);
        }

        public static string UserResidenceZip
        {
            get => AppSettings.GetValueOrDefault("UserResidenceZip", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserResidenceZip", value);
        }

        public static string UserResidenceAddress
        {
            get => AppSettings.GetValueOrDefault("UserResidenceAddress", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserResidenceAddress", value);
        }

        public static string UserPhoneNumber
        {
            get => AppSettings.GetValueOrDefault("UserPhoneNumber", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserPhoneNumber", value);
        }

        public static string UserEmail
        {
            get => AppSettings.GetValueOrDefault("UserEmail", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserEmail", value);
        }

        public static string UserRifSocialPlatform
        {
            get => AppSettings.GetValueOrDefault("UserRifSocialPlatform", string.Empty);
            set => AppSettings.AddOrUpdateValue("UserRifSocialPlatform", value);
        }

        public static string UserAcceptanceFlag
        {
            get => AppSettings.GetValueOrDefault("UserAcceptanceFlag", "0");
            set => AppSettings.AddOrUpdateValue("UserAcceptanceFlag", value);
        }

        public static DateTime? UserInsertDate
        {
            get => DateConverter.FromString(AppSettings.GetValueOrDefault("UserInsertDate", null));
            set => AppSettings.AddOrUpdateValue("UserInsertDate", DateConverter.FromDateTime(value));
        }

        public static DateTime? UserUpdateDate
        {
            get => DateConverter.FromString(AppSettings.GetValueOrDefault("UserUpdateDate", null));
            set => AppSettings.AddOrUpdateValue("UserUpdateDate", DateConverter.FromDateTime(value));
        }

        public static string UserStrBirthDate
        {
            get => AppSettings.GetValueOrDefault("UserStrBirthDate", string.Empty);
            set => AppSettings.AddOrUpdateValue("UserStrBirthDate", value);
        }

        public static bool UserRegisteredSynonimFlag
        {
            get => AppSettings.GetValueOrDefault("UserRegisteredSynonimFlag", false);
            set => AppSettings.AddOrUpdateValue("UserRegisteredSynonimFlag", value);
        }

        public static int UserSpidIdPIndex
        {
            get => AppSettings.GetValueOrDefault("UserSpidIdPIndex", (int)IdP.None);
            set => AppSettings.AddOrUpdateValue("UserSpidIdPIndex", value);
        }

        #region Borsellino

        public static long BorsellinoId
        {
            get => LongConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoId", string.Empty));
            set => AppSettings.AddOrUpdateValue("BorsellinoId", LongConverter.FromLong(value));
        }

        public static double BorsellinoImportoTot
        {
            get => DoubleConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoImportoTot", string.Empty));
            set => AppSettings.AddOrUpdateValue("BorsellinoImportoTot", DoubleConverter.FromDouble(value));
        }

        public static double BorsellinoImportoRichNonValidFisico
        {
            get => DoubleConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoImportoRichNonValidFisico", string.Empty));
            set => AppSettings.AddOrUpdateValue("BorsellinoImportoRichNonValidFisico", DoubleConverter.FromDouble(value));
        }

        public static double BorsellinoImportoRichNonValidOnline
        {
            get => DoubleConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoImportoRichNonValidOnline", string.Empty));
            set => AppSettings.AddOrUpdateValue("BorsellinoImportoRichNonValidOnline", DoubleConverter.FromDouble(value));
        }

        public static double BorsellinoImportoValidato
        {
            get => DoubleConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoImportoValidato", string.Empty));
            set => AppSettings.AddOrUpdateValue("BorsellinoImportoValidato", DoubleConverter.FromDouble(value));
        }

        public static double BorsellinoImportoResiduo
        {
            get => DoubleConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoImportoResiduo", string.Empty));
            set => AppSettings.AddOrUpdateValue("BorsellinoImportoResiduo", DoubleConverter.FromDouble(value));
        }

        public static long BorsellinoIdStato
        {
            get => LongConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoIdStato", string.Empty));
            set => AppSettings.AddOrUpdateValue("BorsellinoIdStato", LongConverter.FromLong(value));
        }

        public static DateTime? BorsellinoDataInserimento
        {
            get => DateConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoDataInserimento", null));
            set => AppSettings.AddOrUpdateValue("BorsellinoDataInserimento", DateConverter.FromDateTime(value));
        }

        public static DateTime? BorsellinoDatAggiornamento
        {
            get => DateConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoDatAggiornamento", null));
            set => AppSettings.AddOrUpdateValue("BorsellinoDatAggiornamento", DateConverter.FromDateTime(value));
        }

        public static int BorsellinoNumVoucherSpesiFisici
        {
            get => AppSettings.GetValueOrDefault("BorsellinoNumVoucherSpesiFisici", 0);
            set => AppSettings.AddOrUpdateValue("BorsellinoNumVoucherSpesiFisici", value);
        }

        public static int BorsellinoNumVoucherDaSpendereFisici
        {
            get => AppSettings.GetValueOrDefault("BorsellinoNumVoucherDaSpendereFisici", 0);
            set => AppSettings.AddOrUpdateValue("BorsellinoNumVoucherDaSpendereFisici", value);
        }

        public static int BorsellinoNumVoucherSpesiOnline
        {
            get => AppSettings.GetValueOrDefault("BorsellinoNumVoucherSpesiOnline", 0);
            set => AppSettings.AddOrUpdateValue("BorsellinoNumVoucherSpesiOnline", value);
        }

        public static int BorsellinoNumVoucherDaSpendereOnline
        {
            get => AppSettings.GetValueOrDefault("BorsellinoNumVoucherDaSpendereOnline", 0);
            set => AppSettings.AddOrUpdateValue("BorsellinoNumVoucherDaSpendereOnline", value);
        }

        public static int BorsellinoNumTotaleVoucherSpesi
        {
            get => AppSettings.GetValueOrDefault("BorsellinoNumTotaleVoucherSpesi", 0);
            set => AppSettings.AddOrUpdateValue("BorsellinoNumTotaleVoucherSpesi", value);
        }

        public static int BorsellinoNumTotaleVoucherDaSpendere
        {
            get => AppSettings.GetValueOrDefault("BorsellinoNumTotaleVoucherDaSpendere", 0);
            set => AppSettings.AddOrUpdateValue("BorsellinoNumTotaleVoucherDaSpendere", value);
        }

        #endregion

        public static void SetBeneficiario(BeneficiarioBean beneficiario)
        {
            UserId = beneficiario.IdBeneficiario.ToString();
            UserCodFisc = beneficiario.CodiceFiscale;
            UserAnnoRif = beneficiario.AnnoRif;
            UserName = beneficiario.Nome;
            UserSurname = beneficiario.Cognome;
            UserGender = beneficiario.Sesso;
            UserBirthDate = beneficiario.DataNascita;
            UserBirthCity = beneficiario.ComuneNascita;
            UserBirthProvince = beneficiario.ProvinciaNascita;
            UserResidenceCity = beneficiario.ComuneResidenza;
            UserResidenceProvince = beneficiario.ProvinciaResidenza;
            UserResidenceZip = beneficiario.CapResidenza;
            UserResidenceAddress = beneficiario.IndirizzoResidenza;
            UserPhoneNumber = beneficiario.Cellulare;
            UserEmail = beneficiario.Email;
            UserRifSocialPlatform = beneficiario.RifPiattaformaSocial;
            UserAcceptanceFlag = beneficiario.FlagAccettazionePrivacy;
            UserInsertDate = beneficiario.DataInserimento;
            UserUpdateDate = beneficiario.DataAggiornamento;
            UserStrBirthDate = beneficiario.StrDataNascita;
            UserRegisteredSynonimFlag = beneficiario.FlagSinonimoRegistrato ?? false;
            // NOT USED beneficiario.BorsellinoBean
            // NOT USED beneficiario.SpidBean
            // NOT USED beneficiario.ErrorCode
        }

        public static BeneficiarioBean GetBeneficiario()
        {
            long? nullableIdBeneficiario = null;
            if (long.TryParse(UserId, out long idBeneficiario))
            {
                nullableIdBeneficiario = idBeneficiario;
            }

            return new BeneficiarioBean
            {
                IdBeneficiario = nullableIdBeneficiario,
                CodiceFiscale = UserCodFisc,
                AnnoRif = UserAnnoRif,
                Cognome = UserSurname,
                Nome = UserName,
                Sesso = UserGender,
                DataNascita = UserBirthDate,
                ComuneNascita = UserBirthCity,
                ProvinciaNascita = UserBirthProvince,
                ComuneResidenza = UserResidenceCity,
                ProvinciaResidenza = UserResidenceProvince,
                CapResidenza = UserResidenceZip,
                IndirizzoResidenza = UserResidenceAddress,
                Cellulare = UserPhoneNumber,
                Email = UserEmail,
                RifPiattaformaSocial = UserRifSocialPlatform,
                FlagAccettazionePrivacy = UserAcceptanceFlag,
                DataInserimento = UserInsertDate,
                DataAggiornamento = UserUpdateDate,
                StrDataNascita = UserStrBirthDate,
                FlagSinonimoRegistrato = UserRegisteredSynonimFlag,
                BorsellinoBean = null,
                SpidBean = null,
                ErrorCode = 0
            };
        }

        public static void SetUserSpidIdPIndex(IdP idp)
        {
            UserSpidIdPIndex = (int)idp;
        }

        public static void UserLogin(BeneficiarioBean beneficiario)
        {
            if (beneficiario != null)
            {
                UserLogged = true;

                // Instabug login
                if (!Keys.IsInstabugEnabled)
                {
                    InstabugHelper.Login(beneficiario.Email ?? "unknown@email.com", $"{beneficiario.Nome ?? "Unknown Name"} {beneficiario.Cognome ?? "Unknown Surname"}", beneficiario.CodiceFiscale);
                }
            }
        }

        public static void UserLogOut()
        {
            UserLogged = false;
            FEDSecureTokenValue = string.Empty;

            UserId = string.Empty;
            UserCodFisc = string.Empty;
            UserAnnoRif = string.Empty;
            UserName = string.Empty;
            UserSurname = string.Empty;
            UserGender = string.Empty;
            UserBirthDate = null;
            UserBirthCity = string.Empty;
            UserBirthProvince = string.Empty;
            UserResidenceCity = string.Empty;
            UserResidenceProvince = string.Empty;
            UserResidenceZip = string.Empty;
            UserResidenceAddress = string.Empty;
            UserPhoneNumber = string.Empty;
            UserEmail = string.Empty;
            UserRifSocialPlatform = string.Empty;
            UserAcceptanceFlag = "0";
            UserInsertDate = null;
            UserUpdateDate = null;
            UserStrBirthDate = string.Empty;
            UserRegisteredSynonimFlag = false;
            // Setting for beneficiario.BorsellinoBean NOT IMPLEMENTED (otherwise please clear value here)
            // Setting for beneficiario.SpidBean NOT IMPLEMENTED (otherwise please clear value here)
            // Setting for beneficiario.ErrorCode NOT IMPLEMENTED (otherwise please clear value here)

            // Instabug logout
            InstabugHelper.Logout();
        }

        public static void SetBorsellino(BorsellinoBean borsellino)
        {
            BorsellinoId = borsellino.IdBorsellino ?? 0;
            // NOT USED borsellino.IdBeneficiario
            // NOT USED borsellino.AnnoRif
            BorsellinoImportoTot = borsellino.ImportoTot ?? 0;
            BorsellinoImportoRichNonValidFisico = borsellino.ImportoRichNonValidFisico ?? 0;
            BorsellinoImportoRichNonValidOnline = borsellino.ImportoRichNonValidOnline ?? 0;
            BorsellinoImportoValidato = borsellino.ImportoValidato ?? 0;
            BorsellinoImportoResiduo = borsellino.ImportoResiduo ?? 0;
            BorsellinoIdStato = borsellino.IdStato ?? 0;
            BorsellinoDataInserimento = borsellino.DataInserimento;
            BorsellinoDatAggiornamento = borsellino.DatAggiornamento;
            BorsellinoNumVoucherSpesiFisici = borsellino.NumVoucherSpesiSFisici ?? 0;
            BorsellinoNumVoucherDaSpendereFisici = borsellino.NumVoucherDaSpendereSFisici ?? 0;
            BorsellinoNumVoucherSpesiOnline = borsellino.NumVoucherSpesiSOnline ?? 0;
            BorsellinoNumVoucherDaSpendereOnline = borsellino.NumVoucherDaSpendereSOnline ?? 0;
            BorsellinoNumTotaleVoucherSpesi = borsellino.NumTotaleVoucherSpesi ?? 0;
            BorsellinoNumTotaleVoucherDaSpendere = borsellino.NumTotaleVoucherDaSpendere ?? 0;
        }

        public static BorsellinoBean GetBorsellino()
        {
            return new BorsellinoBean
            {
                IdBorsellino = BorsellinoId,
                ImportoTot = BorsellinoImportoTot,
                ImportoRichNonValidFisico = BorsellinoImportoRichNonValidFisico,
                ImportoRichNonValidOnline = BorsellinoImportoRichNonValidOnline,
                ImportoValidato = BorsellinoImportoValidato,
                ImportoResiduo = BorsellinoImportoResiduo,
                IdStato = BorsellinoIdStato,
                DataInserimento = BorsellinoDataInserimento,
                DatAggiornamento = BorsellinoDatAggiornamento,
                NumVoucherSpesiSFisici = BorsellinoNumVoucherSpesiFisici,
                NumVoucherDaSpendereSFisici = BorsellinoNumVoucherDaSpendereFisici,
                NumVoucherSpesiSOnline = BorsellinoNumVoucherSpesiOnline,
                NumVoucherDaSpendereSOnline = BorsellinoNumVoucherDaSpendereOnline,
                NumTotaleVoucherSpesi = BorsellinoNumTotaleVoucherSpesi,
                NumTotaleVoucherDaSpendere = BorsellinoNumTotaleVoucherDaSpendere,
            };
        }

    }
}

