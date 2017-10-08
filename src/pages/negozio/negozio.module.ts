import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { NegozioPage } from './negozio';
import { ComponentsModule } from '../../components/components.module';

@NgModule({
  declarations: [
    NegozioPage,
  ],
  imports: [
    IonicPageModule.forChild(NegozioPage),
    ComponentsModule
  ],
})
export class NegozioPageModule {}
