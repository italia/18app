import { Component, Input } from '@angular/core';
import { ModalController } from 'ionic-angular';
import { RatingPage } from '../../pages/rating/rating';
// import { CardsPage } from '../../pages/cards/cards';

/**
 * Generated class for the NavAccountComponent component.
 *
 * See https://angular.io/api/core/Component for more info on Angular
 * Components.
 */
@Component({
  selector: 'custom-navbar',
  templateUrl: 'custom-navbar.html'
})
export class CustomNavbarComponent {

  @Input() text: string;
  @Input() type: number;

  private LEFT_TEXT_RIGHT_ACCOUNT: number = 0;
  private LEFT_LOGO_RIGHT_ACCOUNT: number = 1;
  private CENTER_LOGO: number = 2;
  private LEFT_TEXT_RIGHT_LOGO: number = 3;

  constructor(public modalCtrl: ModalController) {
  }

  openPopUp(): void{
    this.modalCtrl.create(RatingPage).present();
  }


}
