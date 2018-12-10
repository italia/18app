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

        public static bool UserLogged
        {
            get => AppSettings.GetValueOrDefault("UserLogged", false);
            set => AppSettings.AddOrUpdateValue("UserLogged", value);
        }

        public static string FEDSecureToken
        {
            get => AppSettings.GetValueOrDefault("FEDSecureToken", string.Empty);
            set => AppSettings.AddOrUpdateValue("FEDSecureToken", value);
        }

        public static string UserId
        {
            get => AppSettings.GetValueOrDefault("UserId", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserId", value);
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

        public static string UserResidenceAddress
        {
            get => AppSettings.GetValueOrDefault("UserResidenceAddress", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserResidenceAddress", value);
        }

        public static string UserResidenceZip
        {
            get => AppSettings.GetValueOrDefault("UserResidenceZip", String.Empty);
            set => AppSettings.AddOrUpdateValue("UserResidenceZip", value);
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

        public static string UserAcceptanceFlag
        {
            get => AppSettings.GetValueOrDefault("UserAcceptanceFlag", "0");
            set => AppSettings.AddOrUpdateValue("UserAcceptanceFlag", value);
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
            get => DoubleConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoImportoTot", string.Empty));
            set => AppSettings.AddOrUpdateValue("BorsellinoImportoTot", DoubleConverter.FromDouble(value));
        }

        public static double BorsellinoImportoRichNonValidOnline
        {
            get => DoubleConverter.FromString(AppSettings.GetValueOrDefault("BorsellinoImportoRichNonValidFisico", string.Empty));
            set => AppSettings.AddOrUpdateValue("BorsellinoImportoRichNonValidFisico", DoubleConverter.FromDouble(value));
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
            UserName = beneficiario.Nome;
            UserSurname = beneficiario.Cognome;
            UserAnnoRif = beneficiario.AnnoRif;
            UserBirthDate = beneficiario.DataNascita;
            UserPhoneNumber = beneficiario.Cellulare;
            UserEmail = beneficiario.Email;
            UserAcceptanceFlag = beneficiario.FlagAccettazionePrivacy;
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
                Nome = UserName,
                Cognome = UserSurname,
                AnnoRif = UserAnnoRif,
                DataNascita = UserBirthDate,
                Cellulare = UserPhoneNumber,
                Email = UserEmail,
                FlagAccettazionePrivacy = UserAcceptanceFlag,
            };
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

