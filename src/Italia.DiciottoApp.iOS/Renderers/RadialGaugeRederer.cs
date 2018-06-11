using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using CoreGraphics;
using Foundation;
using Italia.DiciottoApp.CustomRenders;
using Italia.DiciottoApp.iOS.Renderers;
using UIKit;
using Xamarin.Forms;
using Xamarin.Forms.Platform.iOS;

[assembly: ExportRenderer(typeof(RadialGauge), typeof(RadialGaugeRederer))]
namespace Italia.DiciottoApp.iOS.Renderers
{
    public class RadialGaugeRederer: ViewRenderer<RadialGauge, UIView>
    {
        protected override void OnElementChanged(ElementChangedEventArgs<RadialGauge> e)
        {
            base.OnElementChanged(e);
            if (Control == null)
            {
                var radialGaugeView = new UIView();
                SetNativeControl(radialGaugeView);
            }
        }

        protected override void OnElementPropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            base.OnElementPropertyChanged(sender, e);
            if (e.PropertyName == RadialGauge.UsedPercentageProperty.PropertyName)
            {
                this.SetNeedsDisplay();
            }
        }

        public override void Draw(CGRect frame)
        {
            // DrawCircleDot(rect, Element.UnusedStrokeColor.ToUIColor(), Element.UsedStrokeColor.ToUIColor(), Element.UsedPercentage);

            nfloat strokeWidth = new nfloat(Element.StrokeWidth);
            UIColor usedStrokeColor = Element.UsedStrokeColor.ToUIColor();
            UIColor unusedStrokeColor = Element.UnusedStrokeColor.ToUIColor();
            UIColor fillColor = Element.FillColor.ToUIColor();

            nfloat startAngle = new nfloat(- Math.PI / 2);
            nfloat usedEndAngle = new nfloat(2 * Math.PI * Element.UsedPercentage) + startAngle;

            nfloat radius = new nfloat(Math.Min(frame.Height, frame.Width)) / 2 - strokeWidth;
            nfloat innerRadius = radius - 2 * strokeWidth;
            nfloat lineHalfLength = 0.3F * innerRadius;
            nfloat lineHalfThikness = 0.0375F * innerRadius;

            CGPoint frameCenter = new CGPoint(frame.X + frame.Width / 2, frame.Y + frame.Height / 2);
            CGRect circleRect = new CGRect(frameCenter.X - radius, frameCenter.Y - radius, 2 * radius, 2 * radius);
            CGRect innerCircleRect = new CGRect(frameCenter.X - innerRadius, frameCenter.Y - innerRadius, 2 * innerRadius, 2 * innerRadius);
            CGRect horizontalRect = new CGRect(frameCenter.X - lineHalfLength, frameCenter.Y - lineHalfThikness, 2 * lineHalfLength, 2 * lineHalfThikness);
            CGRect verticalRect = new CGRect(frameCenter.X - lineHalfThikness, frameCenter.Y - lineHalfLength, 2 * lineHalfThikness, 2 * lineHalfLength);

            // Draw the used arc
            // var usedArcStrokePath = UIBezierPath.FromArc(frameCenter, radius, startAngle, usedSweepAngle, true); //clockwise
            var usedArcStrokePath = UIBezierPath.FromArc(frameCenter, radius, startAngle, usedEndAngle, true);
            usedStrokeColor.SetStroke();
            usedArcStrokePath.LineWidth = strokeWidth;
            usedArcStrokePath.Stroke();

            // Draw the unused arc
            var unusedArcStrokePath = UIBezierPath.FromArc(frameCenter, radius, usedEndAngle, startAngle, true);
            unusedStrokeColor.SetStroke();
            unusedArcStrokePath.LineWidth = strokeWidth;
            unusedArcStrokePath.Stroke();

            // Draw the inner circle
            var innerCirclePath = UIBezierPath.FromOval(innerCircleRect);
            fillColor.SetFill();
            innerCirclePath.LineWidth = new nfloat(0);
            innerCirclePath.Fill();

            // Draw plus sign horizontal line
            var plusHorizontalLinePath = UIBezierPath.FromRect(horizontalRect);
            Color.White.ToUIColor().SetFill();
            plusHorizontalLinePath.LineWidth = new nfloat(0);
            plusHorizontalLinePath.Fill();

            // Draw plus sign vertical line
            var plusVerticalLinePath = UIBezierPath.FromRect(verticalRect);
            Color.White.ToUIColor().SetFill();
            plusVerticalLinePath.LineWidth = new nfloat(0);
            plusVerticalLinePath.Fill();
        }

    }
}