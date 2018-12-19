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
using Italia.DiciottoApp.CustomRenderers;
using Italia.DiciottoApp.Droid.Renderers;
using Xamarin.Forms;
using Xamarin.Forms.Platform.Android;

[assembly: ExportRenderer(typeof(RadialGauge), typeof(RadialGaugeRenderer))]
namespace Italia.DiciottoApp.Droid.Renderers
{
    public class RadialGaugeRenderer : ViewRenderer<RadialGauge, Android.Views.View>
    {
        public RadialGaugeRenderer(Context context): base(context)
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
            if (e.PropertyName == RadialGauge.InitialProperty.PropertyName ||
                e.PropertyName == RadialGauge.CreatedProperty.PropertyName ||
                e.PropertyName == RadialGauge.SpentProperty.PropertyName)
            {
                Invalidate();
            }
        }

        protected override void OnDraw(Canvas canvas)
        {
            float strokeWidth = Convert.ToSingle(Element.StrokeWidth);
            float innerSpaceWidth = Convert.ToSingle(Element.InnerSpaceWidth);
            float strokeMiter = 10.0f;

            var rect = new Rect();
            this.GetDrawingRect(rect);

            float spentAngle = 360 * Convert.ToSingle(Element.Spent/Element.Initial);
            float createdAngle = 360 * Convert.ToSingle(Element.Created / Element.Initial);

            float radius = Math.Min(rect.Height(), rect.Width()) / 2 - strokeWidth;

            RectF circleRect = new RectF(
                rect.ExactCenterX() - radius,
                rect.ExactCenterY() - radius,
                rect.ExactCenterX() + radius,
                rect.ExactCenterY() + radius
            );

            float innerRadius = radius - strokeWidth - innerSpaceWidth; // radius - 2 * strokeWidth;

            Paint spentPaint = new Paint(PaintFlags.AntiAlias)
            {
                StrokeWidth = strokeWidth,
                StrokeMiter = strokeMiter,
                Color = Element.SpentStrokeColor.ToAndroid()
            };
            spentPaint.SetStyle(Paint.Style.Stroke);

            Paint createdPaint = new Paint(PaintFlags.AntiAlias)
            {
                StrokeWidth = strokeWidth,
                StrokeMiter = strokeMiter,
                Color = Element.CreatedStrokeColor.ToAndroid()
            };
            createdPaint.SetStyle(Paint.Style.Stroke);

            Paint availablePaint = new Paint(PaintFlags.AntiAlias)
            {
                StrokeWidth = strokeWidth,
                StrokeMiter = strokeMiter,
                Color = Element.AvailableStrokeColor.ToAndroid()
            };
            availablePaint.SetStyle(Paint.Style.Stroke);

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
            paintPlus.SetStyle(Paint.Style.Stroke);

            //canvas.DrawArc(circleRect, -90, spentAngle, false, spentPaint);
            //canvas.DrawArc(circleRect, -90 + spentAngle, -90 + spentAngle + createdAngle, false, createdPaint);
            //canvas.DrawArc(circleRect, -90 + spentAngle + createdAngle, 360 - spentAngle - createdAngle, false, availablePaint);

            canvas.DrawArc(circleRect, -90, spentAngle, false, spentPaint);
            canvas.DrawArc(circleRect, -90 + spentAngle, createdAngle, false, createdPaint);
            canvas.DrawArc(circleRect, -90 + spentAngle + createdAngle, 360 - spentAngle - createdAngle, false, availablePaint);

            canvas.DrawCircle(rect.ExactCenterX(), rect.ExactCenterY(), innerRadius, paintCircle);
            canvas.DrawLine(rect.ExactCenterX() - 0.3F * innerRadius, rect.ExactCenterY(), rect.ExactCenterX() + 0.3F * innerRadius, rect.ExactCenterY(), paintPlus);
            canvas.DrawLine(rect.ExactCenterX(), rect.ExactCenterY() - 0.3F * innerRadius, rect.ExactCenterX(), rect.ExactCenterY() + 0.3F * innerRadius, paintPlus);
        }
    }
}