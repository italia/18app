import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { InfoPage } from './info';
import { ComponentsModule } from '../../components/components.module';

@NgModule({
  declarations: [
    InfoPage,
  ],
  imports: [
    IonicPageModule.forChild(InfoPage),
    ComponentsModule
  ],
  exports: [
    InfoPage
  ]
})
export class InfoPageModule {}
