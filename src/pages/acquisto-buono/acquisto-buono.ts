import { Component } from '@angular/core';
import { IonicPage, NavController, NavParams } from 'ionic-angular';

/**
 * Generated class for the AcquistoBuonoPage page.
 *
 * See https://ionicframework.com/docs/components/#navigation for more info on
 * Ionic pages and navigation.
 */

@IonicPage()
@Component({
  selector: 'page-acquisto-buono',
  templateUrl: 'acquisto-buono.html',
})
export class AcquistoBuonoPage {


  private prodotto:any;
  private item: any;
  constructor(public navCtrl: NavController, public navParams: NavParams) {
    this.item = this.navParams.get('item');
    this.prodotto = this.navParams.get('indice');
    console.log(navParams);

  }

  // calcolaMax(//Inserire qui reddito residuo da informazioni utente){
  //   let redditoMax = 500.00;
  //   return redditoMax(); //da sostituire con reddito residuo
  // }
}
