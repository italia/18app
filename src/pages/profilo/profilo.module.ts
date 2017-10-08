import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { ProfiloPage } from './profilo';
import { ComponentsModule } from '../../components/components.module';

@NgModule({
  declarations: [
    ProfiloPage,
  ],
  imports: [
    IonicPageModule.forChild(ProfiloPage),
    ComponentsModule
  ],
  exports: [
    ProfiloPage
  ]
})
export class ProfiloPageModule {}
