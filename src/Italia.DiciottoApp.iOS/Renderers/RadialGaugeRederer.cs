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
                var circleDotView = new UIView();
                SetNativeControl(circleDotView);
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

        public override void Draw(CGRect rect)
        {
            DrawCircleDot(rect, Element.UnusedStrokeColor.ToUIColor(), Element.UsedStrokeColor.ToUIColor(), Element.UsedPercentage);
        }

        private void DrawCircleDot(CGRect frame, UIColor colorFill, UIColor colorStroke, double usedPercentage)
        {
            //if (circleDotActive)
            //{
            //    //// circleDotFill Drawing
            //    var circleDotFillPath = UIBezierPath.FromOval(new CGRect(frame.GetMinX() + 1.0f, frame.GetMinY() + 1.0f, frame.Width - 2.0f, frame.Height - 2.0f));
            //    colorFill.SetFill();
            //    circleDotFillPath.Fill();
            //}

            //// circleDotStroke Drawing
            var circleDotStrokePath = UIBezierPath.FromOval(new CGRect(frame.GetMinX() + 1.0f, frame.GetMinY() + 1.0f, frame.Width - 2.0f, frame.Height - 2.0f));
            colorStroke.SetStroke();
            circleDotStrokePath.LineWidth = 1.5f;
            circleDotStrokePath.Stroke();
        }

    }
}