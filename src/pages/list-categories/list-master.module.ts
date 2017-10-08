import { NgModule } from '@angular/core';
import { TranslateModule } from '@ngx-translate/core';
import { IonicPageModule } from 'ionic-angular';
import { ListDetailPageModule } from '../list-detail/list-detail.module';

import { ListMasterPage } from './list-master';

@NgModule({
  declarations: [
    ListMasterPage,
  ],
  imports: [
    ListDetailPageModule,
    IonicPageModule.forChild(ListMasterPage),
    TranslateModule.forChild()

  ],
  exports: [
    ListMasterPage
  ]
})
export class ListMasterPageModule { }
