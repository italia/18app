import { Component } from '@angular/core';
import { IonicPage, NavController, NavParams } from 'ionic-angular';
import { OnInit } from '@angular/core';

/**
 * Generated class for the HomePage page.
 *
 * See https://ionicframework.com/docs/components/#navigation for more info on
 * Ionic pages and navigation.
 */

@IonicPage()
@Component({
  selector: 'page-home',
  templateUrl: 'home.html',
})
export class HomePage {

  constructor(public navCtrl: NavController, public navParams: NavParams) {

  }

  ngOnInit() {


    let el = document.getElementById('graph'); // get canvas

    let options = {
        percent:  Number(el.getAttribute('balance')) || 25,
        size: Number(el.getAttribute('data-size')) || 220,
        lineWidth: Number(el.getAttribute('data-line')) || 5,
        rotate: Number(el.getAttribute('data-rotate')) || 0
    }

    let canvas = document.createElement('canvas');
    // let par = document.createElement('p');
    // par.textContent = '+';

    let ctx = canvas.getContext('2d');
    canvas.width = canvas.height = options.size;

    el.appendChild(canvas);
    // canvas.appendChild(par);

    ctx.translate(options.size / 2, options.size / 2); // change center
    ctx.rotate((-1 / 2 + options.rotate / 180) * Math.PI); // rotate -90 deg

    //imd = ctx.getImageData(0, 0, 240, 240);
    let radius = (options.size - options.lineWidth) / 2;

    let drawCircle = function(color, lineWidth, percent) {
            percent = Math.min(Math.max(0, percent || 1), 1);
            ctx.beginPath();
            ctx.arc(0, 0, radius, 0, Math.PI * 2 * percent, false);
            ctx.strokeStyle = color;
            ctx.lineCap = 'round'; // butt, round or square
            ctx.lineWidth = lineWidth
            ctx.stroke();
    };

    let drawFillCircle = function(color) {
            ctx.beginPath();
            ctx.arc(0, 0, radius - options.lineWidth - 5, 0, Math.PI * 2, false);
            ctx.fillStyle = color;
            ctx.fill();
            ctx.strokeStyle = color;
            ctx.lineCap = 'round'; // butt, round or square
            ctx.stroke();
    };

    drawCircle('#003E90', options.lineWidth, 500 / 500);
    drawCircle('#65DCDF', options.lineWidth, options.percent / 500);
    drawFillCircle('#0066CC');

    ctx.font = "120px Arial";
    // ctx.textAlign = "center";
    ctx.fillStyle = "#fff";
    ctx.fillText("+", -32, 42);
    // ctx.fillText("+", canvas.width / 2, canvas.height / 2);

  }

  ionViewDidLoad() {
    console.log('ionViewDidLoad HomePage');
  }
}
