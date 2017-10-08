import { NgModule } from '@angular/core';
import { TranslateModule } from '@ngx-translate/core';
import { IonicPageModule } from 'ionic-angular';

import { RatingPage } from './rating';
import { ComponentsModule } from '../../components/components.module';

@NgModule({
  declarations: [
    RatingPage,
  ],
  imports: [
    ComponentsModule,
    IonicPageModule.forChild(RatingPage),
    TranslateModule.forChild()
  ],
  exports: [
    RatingPage
  ]
})
export class RatingPageModule { }
