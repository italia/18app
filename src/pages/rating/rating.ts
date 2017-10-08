import { Component } from '@angular/core';
import { IonicPage, NavController, NavParams } from 'ionic-angular';

/**
 * Generated class for the RatingPage page.
 *
 * See https://ionicframework.com/docs/components/#navigation for more info on
 * Ionic pages and navigation.
 */

@IonicPage()
@Component({
  selector: 'page-rating',
  templateUrl: 'rating.html',
})
export class RatingPage{

  private response: {} = {
      yes: 0,
      no: 1,
      maybe: 2
    };

  constructor(public navCtrl: NavController, public navParams: NavParams) {
  }

  onResponse(response): void{
    console.log('response: ', response);
    this.navCtrl.pop(/*response*/);
  }

}
