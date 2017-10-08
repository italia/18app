import { NgModule } from '@angular/core';
import { IonicModule } from 'ionic-angular';
import { CustomNavbarComponent } from './custom-navbar/custom-navbar';
import { NavAccountComponent } from './nav-account/nav-account';
import { MapComponent } from './map/map';

@NgModule({
	declarations: [
		CustomNavbarComponent,
    NavAccountComponent,
    MapComponent
	],
	imports: [
		IonicModule
	],
	exports: [
		CustomNavbarComponent,
    NavAccountComponent,
    MapComponent
	]
})
export class ComponentsModule {}
