import { Component, Input } from '@angular/core';

/**
 * Generated class for the NavAccountComponent component.
 *
 * See https://angular.io/api/core/Component for more info on Angular
 * Components.
 */
@Component({
  selector: 'nav-account',
  templateUrl: 'nav-account.html'
})
export class NavAccountComponent {

  credit: number = 200;
  notificationCounter: number;

  constructor() {
  }

  public onCreditChange(): void{
    //Metodo richiamato ogni volta che il credito cambia
  }

  public onNotificationsNumberChange(): void{
    //Metodo per la gestione del contatore notifiche
  }

}
