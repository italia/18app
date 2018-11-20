using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;

namespace Italia.DiciottoApp.Utils
{
    public static class DoubleConverter
    {
        public static double FromString(string strDouble)
        {
            if (double.TryParse(strDouble, NumberStyles.AllowDecimalPoint, CultureInfo.InvariantCulture,  out double result))
            {
                return result;
            }

            return 0;
        }

        public static string FromDouble(double value)
        {
            return value.ToString(CultureInfo.InvariantCulture);
        }

        public static double? FromStringToNullableDouble(string strDouble)
        {
            if (double.TryParse(strDouble, out double result))
            {
                return result;
            }

            return null;
        }

        public static string FromDouble(double? value)
        {
            return value?.ToString(CultureInfo.InvariantCulture) ?? string.Empty;
        }
    }
}
