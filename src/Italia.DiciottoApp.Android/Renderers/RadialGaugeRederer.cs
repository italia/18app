using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using Android.App;
using Android.Content;
using Android.Graphics;
using Android.OS;
using Android.Runtime;
using Android.Views;
using Android.Widget;
using Italia.DiciottoApp.CustomRenders;
using Italia.DiciottoApp.Droid.Renderers;
using Xamarin.Forms;
using Xamarin.Forms.Platform.Android;

[assembly: ExportRenderer(typeof(RadialGauge), typeof(RadialGaugeRederer))]
namespace Italia.DiciottoApp.Droid.Renderers
{
    public class RadialGaugeRederer : ViewRenderer<RadialGauge, Android.Views.View>
    {
        public RadialGaugeRederer(Context context): base(context)
        {
            SetWillNotDraw(false);
        }

        protected override void OnElementChanged(ElementChangedEventArgs<RadialGauge> e)
        {
            base.OnElementChanged(e);
            if (Control == null)
            {
                var radialGaugeView = new Android.Views.View(Context);
                SetNativeControl(radialGaugeView);
            }
        }

        protected override void OnElementPropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            base.OnElementPropertyChanged(sender, e);
            if (e.PropertyName == RadialGauge.UsedPercentageProperty.PropertyName)
            {
                Invalidate();
            }
        }

        protected override void OnDraw(Canvas canvas)
        {
            float strokeWidth = Convert.ToSingle(Element.StrokeWidth);
            float strokeMiter = 10.0f;

            var rect = new Rect();
            this.GetDrawingRect(rect);

            float sweepAngle = 360 * Convert.ToSingle(Element.UsedPercentage);

            float radius = Math.Min(rect.Height(), rect.Width()) / 2 - strokeWidth;

            RectF circleRect = new RectF(
                rect.ExactCenterX() - radius,
                rect.ExactCenterY() - radius,
                rect.ExactCenterX() + radius,
                rect.ExactCenterY() + radius
            );

            float innerRadius = radius - 2 * strokeWidth;

            Paint paintUsed = new Paint(PaintFlags.AntiAlias)
            {
                StrokeWidth = strokeWidth,
                StrokeMiter = strokeMiter,
                Color = Element.UsedStrokeColor.ToAndroid()
            };
            paintUsed.SetStyle(Paint.Style.Stroke);

            Paint paintUnused = new Paint(PaintFlags.AntiAlias)
            {
                StrokeWidth = strokeWidth,
                StrokeMiter = strokeMiter,
                Color = Element.UnusedStrokeColor.ToAndroid()
            };
            paintUnused.SetStyle(Paint.Style.Stroke);

            Paint paintCircle = new Paint(PaintFlags.AntiAlias)
            {
                Color = Element.FillColor.ToAndroid()
            };

            Paint paintPlus = new Paint(PaintFlags.AntiAlias)
            {
                StrokeWidth = 0.075F * innerRadius,
                StrokeMiter = strokeMiter,
                Color = Android.Graphics.Color.White
            };
            paintUnused.SetStyle(Paint.Style.Stroke);

            canvas.DrawArc(circleRect, -90, sweepAngle, false, paintUsed);
            canvas.DrawArc(circleRect, -90 + sweepAngle, 360 - sweepAngle, false, paintUnused);
            canvas.DrawCircle(rect.ExactCenterX(), rect.ExactCenterY(), innerRadius, paintCircle);
            canvas.DrawLine(rect.ExactCenterX() - 0.3F * innerRadius, rect.ExactCenterY(), rect.ExactCenterX() + 0.3F * innerRadius, rect.ExactCenterY(), paintPlus);
            canvas.DrawLine(rect.ExactCenterX(), rect.ExactCenterY() - 0.3F * innerRadius, rect.ExactCenterX(), rect.ExactCenterY() + 0.3F * innerRadius, paintPlus);
        }
    }
}