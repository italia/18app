import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { NotifichePage } from './notifiche';
import { ComponentsModule } from '../../components/components.module';

@NgModule({
  declarations: [
    NotifichePage,
  ],
  imports: [
    IonicPageModule.forChild(NotifichePage),
    ComponentsModule
  ],
  exports: [
    NotifichePage
  ]
})
export class NotifichePageModule {}
