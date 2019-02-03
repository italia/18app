using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using CoreGraphics;
using Foundation;
using Italia.DiciottoApp.CustomRenderers;
using Italia.DiciottoApp.iOS.Renderers;
using UIKit;
using Xamarin.Essentials;
using Xamarin.Forms;
using Xamarin.Forms.Platform.iOS;

[assembly: ExportRenderer(typeof(RadialGauge), typeof(RadialGaugeRenderer))]
namespace Italia.DiciottoApp.iOS.Renderers
{
    public class RadialGaugeRenderer: ViewRenderer<RadialGauge, UIView>
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
            if (e.PropertyName == RadialGauge.InitialProperty.PropertyName ||
                e.PropertyName == RadialGauge.CreatedProperty.PropertyName ||
                e.PropertyName == RadialGauge.SpentProperty.PropertyName)
            {
                this.SetNeedsDisplay();
            }
        }

        public override void Draw(CGRect frame)
        {
            nfloat strokeWidth = new nfloat(Element.StrokeWidth);
            nfloat innerSpaceWidth = new nfloat(Element.InnerSpaceWidth);
            UIColor spentStrokeColor = Element.SpentStrokeColor.ToUIColor();
            UIColor createdStrokeColor = Element.CreatedStrokeColor.ToUIColor();
            UIColor availableStrokeColor = Element.AvailableStrokeColor.ToUIColor();
            UIColor fillColor = Element.FillColor.ToUIColor();

            nfloat spentStartAngle = new nfloat(- Math.PI / 2);
            nfloat spentEndAngle = spentStartAngle + new nfloat(2 * Math.PI * Element.Spent / Element.Initial);

            nfloat createdStartAngle = spentEndAngle;
            nfloat createdEndAngle = createdStartAngle + new nfloat(2 * Math.PI * Element.Created / Element.Initial);

            nfloat radius = new nfloat(Math.Min(frame.Height, frame.Width) / 2 - strokeWidth);
            nfloat innerRadius = radius - (strokeWidth / 2.0F) - innerSpaceWidth;
            nfloat lineHalfLength = 0.3F * innerRadius;
            nfloat lineHalfThikness = 0.0375F * innerRadius;

            CGPoint frameCenter = new CGPoint(frame.X + frame.Width / 2, frame.Y + frame.Height / 2);
            CGRect circleRect = new CGRect(frameCenter.X - radius, frameCenter.Y - radius, 2 * radius, 2 * radius);
            CGRect innerCircleRect = new CGRect(frameCenter.X - innerRadius, frameCenter.Y - innerRadius, 2 * innerRadius, 2 * innerRadius);
            CGRect horizontalRect = new CGRect(frameCenter.X - lineHalfLength, frameCenter.Y - lineHalfThikness, 2 * lineHalfLength, 2 * lineHalfThikness);
            CGRect verticalRect = new CGRect(frameCenter.X - lineHalfThikness, frameCenter.Y - lineHalfLength, 2 * lineHalfThikness, 2 * lineHalfLength);

            // Draw the spent arc
            var spentArcStrokePath = UIBezierPath.FromArc(frameCenter, radius, spentStartAngle, spentEndAngle, true);
            spentStrokeColor.SetStroke();
            spentArcStrokePath.LineWidth = strokeWidth;
            spentArcStrokePath.Stroke();

            // Draw the created arc
            var createdArcStrokePath = UIBezierPath.FromArc(frameCenter, radius, createdStartAngle, createdEndAngle, true);
            createdStrokeColor.SetStroke();
            createdArcStrokePath.LineWidth = strokeWidth;
            createdArcStrokePath.Stroke();

            // Draw the available arc
            var availableArcStrokePath = UIBezierPath.FromArc(frameCenter, radius, createdEndAngle, spentStartAngle, true);
            availableStrokeColor.SetStroke();
            availableArcStrokePath.LineWidth = strokeWidth;
            availableArcStrokePath.Stroke();

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