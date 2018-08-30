using System;
using System.Globalization;
using Xamarin.Forms;

namespace Italia.DiciottoApp.Converters
{
    class NotificationDateTimeColorConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (value is bool isNew)
            {
                return isNew ? "#FF5A6772" : "#FFA9B1B8";
            }
            else
            {
                throw new ArgumentException("value type has to be bolean");
            }
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }
    }
}
