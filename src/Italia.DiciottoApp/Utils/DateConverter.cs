using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;

namespace Italia.DiciottoApp.Utils
{
    public static class DateConverter
    {
        public static DateTime? FromString(string strDate)
        {
            const string FMT = "O";
            try
            {
                if (string.IsNullOrWhiteSpace(strDate))
                {
                    return null;
                }
                else
                {
                    return DateTime.ParseExact(strDate, FMT, CultureInfo.InvariantCulture, DateTimeStyles.RoundtripKind);
                }
            }
            catch (Exception)
            {
                return null;
            }
        }

        public static string FromDateTime(DateTime? date)
        {
            const string FMT = "O";
            try
            {
                string strDate = date.Value.ToString(FMT);
                if (date == null)
                {
                    return string.Empty;
                }
                else
                {
                    return date.Value.ToString(FMT);
                }
            }
            catch (Exception)
            {
                return string.Empty;
            }
        }
    }
}



