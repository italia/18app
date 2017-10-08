import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { ListDetailPage } from './list-detail';
import { AcquistoBuonoPageModule } from '../acquisto-buono/acquisto-buono.module';
@NgModule({
  declarations: [
    ListDetailPage,
  ],
  imports: [
    IonicPageModule.forChild(ListDetailPage),
  ],
})
export class ListDetailPageModule {}
