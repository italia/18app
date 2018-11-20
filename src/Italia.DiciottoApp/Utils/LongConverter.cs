using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Utils
{
    public static class LongConverter
    {
        public static long FromString(string strLong)
        {
            if (long.TryParse(strLong, out long result))
            {
                return result;
            }

            return 0;
        }

        public static string FromLong(long value)
        {
            return value.ToString();
        }

        public static long? FromStringToNullableDouble(string strLong)
        {
            if (long.TryParse(strLong, out long result))
            {
                return result;
            }

            return null;
        }

        public static string FromLong(long? value)
        {
            return value?.ToString() ?? string.Empty;
        }
    }
}
