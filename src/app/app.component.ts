import { Component, ViewChild } from '@angular/core';
import { SplashScreen } from '@ionic-native/splash-screen';
import { StatusBar } from '@ionic-native/status-bar';
import { TranslateService } from '@ngx-translate/core';
import { Config, Nav, Platform } from 'ionic-angular';

import { Page } from '../models';

import { FirstRunPage } from '../pages/pages';

@Component({
  templateUrl: `app.html`
})
export class MyApp {
  rootPage = FirstRunPage;

  @ViewChild(Nav) nav: Nav;

//Il menù dell'account è stato pensato assegnango una pagina per ogni voce,
//attualmente le pagine non esistono
  pages: Page[] = [
    {title: 'Profilo', component:'', icon:'18app-spid'},
    {title: 'Notifiche', component:'', icon:'ios-notifications-outline', value:1},
    {title: 'Logout', component:'', icon:'ios-exit-outline'}
  ];

  openPage(page) {
    // Reset the content nav to have just this page
    // we wouldn't want the back button to show in this scenario
    this.nav.setRoot(page.component);
  }
}
