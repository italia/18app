using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.Converters
{
    class DoubleToItCurrency : IValueConverter
    {
        private readonly CultureInfo ci = new CultureInfo("it-IT");

        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (value is double)
            {
                return ((double)value).ToString("###.00", ci);
            }
            else
            {
                throw new ArgumentException("value type has to be double");
            }
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }
    }
}
