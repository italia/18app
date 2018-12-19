using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.CustomRenderers
{
    // This class define the gauge for vouchers and remaining credit:
    // ------------------------------------------------------------------------------
    // - Initial   : is the initial credit
    // - Created   : is the total ammount of created (but still unused) vouchers
    // - Spent     : is the total ammount of spent vouchers
    // - Used      : is the total ammount of created and spent voucers ( = Created + Spent )
    // - Available : is the credit that remain ( = Initial - Used )

    public class RadialGauge: View
    {
        public static readonly BindableProperty StrokeWidthProperty =
           BindableProperty.Create(nameof(StrokeWidth), typeof(double), typeof(RadialGauge), 5.0);

        public double StrokeWidth
        {
            get { return (double)GetValue(StrokeWidthProperty); }
            set { SetValue(StrokeWidthProperty, value); }
        }

        public static readonly BindableProperty InnerSpaceWidthProperty =
           BindableProperty.Create(nameof(InnerSpaceWidth), typeof(double), typeof(RadialGauge), 5.0);

        public double InnerSpaceWidth
        {
            get { return (double)GetValue(InnerSpaceWidthProperty); }
            set { SetValue(InnerSpaceWidthProperty, value); }
        }

        public static readonly BindableProperty FillColorProperty =
            BindableProperty.Create(nameof(FillColor), typeof(Color), typeof(RadialGauge), Color.DarkGray);

        public Color FillColor
        {
            get { return (Color)GetValue(FillColorProperty); }
            set { SetValue(FillColorProperty, value); }
        }

        public static readonly BindableProperty SpentStrokeColorProperty =
           BindableProperty.Create(nameof(SpentStrokeColor), typeof(Color), typeof(RadialGauge), Color.Black);

        public Color SpentStrokeColor
        {
            get { return (Color)GetValue(SpentStrokeColorProperty); }
            set { SetValue(SpentStrokeColorProperty, value); }
        }

        public static readonly BindableProperty CreatedStrokeColorProperty =
           BindableProperty.Create(nameof(CreatedStrokeColor), typeof(Color), typeof(RadialGauge), Color.Black);

        public Color CreatedStrokeColor
        {
            get { return (Color)GetValue(CreatedStrokeColorProperty); }
            set { SetValue(CreatedStrokeColorProperty, value); }
        }

        public static readonly BindableProperty AvailableStrokeColorProperty =
           BindableProperty.Create(nameof(AvailableStrokeColor), typeof(Color), typeof(RadialGauge), Color.Gray);

        public Color AvailableStrokeColor
        {
            get { return (Color)GetValue(AvailableStrokeColorProperty); }
            set { SetValue(AvailableStrokeColorProperty, value); }
        }

        //public static readonly BindableProperty UsedStrokeColorProperty =
        //   BindableProperty.Create(nameof(UsedStrokeColor), typeof(Color), typeof(RadialGauge), Color.Black);

        //public Color UsedStrokeColor
        //{
        //    get { return (Color)GetValue(UsedStrokeColorProperty); }
        //    set { SetValue(UsedStrokeColorProperty, value); }
        //}

        public static readonly BindableProperty InitialProperty =
           BindableProperty.Create(nameof(Initial), typeof(double), typeof(RadialGauge), 0.25);

        public double Initial
        {
            get { return (double)GetValue(InitialProperty); }
            set { SetValue(InitialProperty, value); }
        }

        public static readonly BindableProperty SpentProperty =
           BindableProperty.Create(nameof(Spent), typeof(double), typeof(RadialGauge), 0.25);

        public double Spent
        {
            get { return (double)GetValue(SpentProperty); }
            set { SetValue(SpentProperty, value); }
        }

        public static readonly BindableProperty CreatedProperty =
           BindableProperty.Create(nameof(Created), typeof(double), typeof(RadialGauge), 0.25);

        public double Created
        {
            get { return (double)GetValue(CreatedProperty); }
            set { SetValue(CreatedProperty, value); }
        }

        public double Used => Created + Spent;

        public double Available => Initial - Used;
    }
}
