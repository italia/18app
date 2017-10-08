import { Component } from '@angular/core';
import { IonicPage, NavController } from 'ionic-angular';

/**
 * The Welcome Page is a splash page that quickly describes the app,
 * and then directs the user to create an account or log in.
 * If you'd like to immediately put the user onto a login/signup page,
 * we recommend not using the Welcome page.
*/
@IonicPage()
@Component({
  selector: 'page-welcome',
  templateUrl: 'welcome.html'
})
export class WelcomePage {

  constructor(public navCtrl: NavController) { }

  login() {
    this.navCtrl.push('LoginPage');
  }

  signup() {
    this.navCtrl.push('SignupPage');
  }

  slides = [
    {
      name: 'concerti',
      image: 'assets/img/bg-concerti@3x.png'
    },
    {
      name: 'cinema',
      image: 'assets/img/bg-cinema@3x.png'
    },
    {
      name: 'libri',
      image: 'assets/img/bg-libri@3x.png'
    }
  ];
}
