import { Component } from '@angular/core';
import { IonicPage, NavController, NavParams } from 'ionic-angular';
import { Info } from '../../models/info';

/**
 * Generated class for the InfoPage page.
 *
 * See https://ionicframework.com/docs/components/#navigation for more info on
 * Ionic pages and navigation.
 */

@IonicPage()
@Component({
  selector: 'page-info',
  templateUrl: 'info.html',
})
export class InfoPage {

  private arrInfo: Array<Info> = [];
  private shownGroup = null;

  constructor(public navCtrl: NavController, public navParams: NavParams) {
    for(let i=0;i<5;i++)
    {
      let info = new Info();
      info.title = "Io sono il titolo n."+i;
      info.description = "Io sono la descrizione n."+i;
      info.id = i;
    //  console.log(i);
      this.arrInfo.push(info);
    }
  }

  ionViewDidLoad() {
    console.log('ionViewDidLoad InfoPage');
  }

  toggleGroup(group) {
      if (this.isGroupShown(group)) {
          this.shownGroup = null;
      } else {
          this.shownGroup = group;
      }
  };
  isGroupShown(group) {
      return this.shownGroup === group;
  };


}
