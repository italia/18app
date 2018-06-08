using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.Converters
{
    class AppAreaOpacityConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            string areaTitle = parameter as string;

            if (value is AppArea && !string.IsNullOrWhiteSpace(areaTitle))
            {
                return ((AppArea)value).ToString() == areaTitle ? 1.0 : 0.5;
            }
            else
            {
                return 0.5;
            }
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }
    }
}
