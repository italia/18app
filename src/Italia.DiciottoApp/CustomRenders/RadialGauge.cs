using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.CustomRenders
{
    public class RadialGauge: View
    {
        public static readonly BindableProperty StrokeWidthProperty =
           BindableProperty.Create(nameof(StrokeWidth), typeof(double), typeof(RadialGauge), 5.0);

        public double StrokeWidth
        {
            get { return (double)GetValue(StrokeWidthProperty); }
            set { SetValue(StrokeWidthProperty, value); }
        }

        public static readonly BindableProperty FillColorProperty =
            BindableProperty.Create(nameof(FillColor), typeof(Color), typeof(RadialGauge), Color.DarkGray);

        public Color FillColor
        {
            get { return (Color)GetValue(FillColorProperty); }
            set { SetValue(FillColorProperty, value); }
        }

        public static readonly BindableProperty UnusedStrokeColorProperty =
           BindableProperty.Create(nameof(UnusedStrokeColor), typeof(Color), typeof(RadialGauge), Color.Gray);

        public Color UnusedStrokeColor
        {
            get { return (Color)GetValue(UnusedStrokeColorProperty); }
            set { SetValue(UnusedStrokeColorProperty, value); }
        }

        public static readonly BindableProperty UsedStrokeColorProperty =
           BindableProperty.Create(nameof(UsedStrokeColor), typeof(Color), typeof(RadialGauge), Color.Black);

        public Color UsedStrokeColor
        {
            get { return (Color)GetValue(UsedStrokeColorProperty); }
            set { SetValue(UsedStrokeColorProperty, value); }
        }

        public static readonly BindableProperty UsedPercentageProperty =
           BindableProperty.Create(nameof(UsedPercentage), typeof(double), typeof(RadialGauge), 0.25);

        public double UsedPercentage
        {
            get { return (double)GetValue(UsedPercentageProperty); }
            set { SetValue(UsedPercentageProperty, value); }
        }


    }
}
