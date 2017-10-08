import { Component } from '@angular/core';
import { IonicPage, NavController } from 'ionic-angular';

import { Coords } from '../../models';

@IonicPage()
@Component({
  selector: 'page-map',
  templateUrl: 'map.html'
})
export class MapPage {
  markers: any[] = [
    {coords: new Coords(40.371002,18.1877503)},
    {coords: new Coords(40.371102,18.1877503)},
    {coords: new Coords(40.371002,18.1878503)},
  ];

  constructor(public navCtrl: NavController) {
  }
}
