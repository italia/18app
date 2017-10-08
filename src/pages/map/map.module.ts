import { NgModule } from '@angular/core';
import { TranslateModule } from '@ngx-translate/core';
import { IonicPageModule } from 'ionic-angular';

import { MapPage } from './map';
import { ComponentsModule } from '../../components/components.module';

@NgModule({
  declarations: [
    MapPage,
  ],
  imports: [
    ComponentsModule,
    IonicPageModule.forChild(MapPage),
    TranslateModule.forChild()
  ],
  exports: [
    MapPage
  ]
})
export class MapPageModule { }
