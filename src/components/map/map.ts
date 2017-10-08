import { Component, ElementRef, NgZone, ViewChild, Input } from '@angular/core';
import { Platform } from 'ionic-angular';
import { Geolocation } from '@ionic-native/geolocation';

import { Coords } from '../../models';
import { ScriptLoaderProvider } from '../../providers/providers';

/**
 * Generated class for the MapComponent component.
 *
 * See https://angular.io/api/core/Component for more info on Angular
 * Components.
 */
declare var google: any;

@Component({
  selector: 'map',
  templateUrl: 'map.html'
})
export class MapComponent{

  @ViewChild('map')
  private mapElement: ElementRef;
  @Input() markers:{coords: Coords, marker?: any}[];
  private map: any;
  private userMarker: any;
  private userPosition: Coords;

  //Conf
  private zoom: number = 13;
  private maxZoom: number = 20;


  constructor(
  public zone: NgZone,
  public platform: Platform,
  private geolocation: Geolocation,
  private scriptLoader: ScriptLoaderProvider
) {
    this.platform.ready().then(() =>
      this.zone.run(()=>this.loadGoogleScript())
    );
  }

  private loadGoogleScript(): void{
    console.log('load Google maps script')
    this.scriptLoader.loadGoogleMapsScript().subscribe(
      (success) => {
        this.loadMap();
        console.log('loaded')
      }
    )
  }

  private loadMap(): void{

   this.geolocation.getCurrentPosition(
     {enableHighAccuracy: true, maximumAge: 2000, timeout: 6000}
   )
   .then((position) =>{
       this.initializeMap(
         this.userPosition = new Coords(
           position.coords.latitude,
           position.coords.longitude
       ));
     },
     (error) => this.onErrorCords(error)
   )
 }

 private onErrorCords(error): void{
    console.log('on Error', error);
  }

  private initializeMap(coords: Coords): void {
    this.zone.run(() => {
      var mapEle = this.mapElement.nativeElement;
      this.map = new google.maps.Map(mapEle, {
        zoom: this.zoom,
        maxZoom: this.maxZoom,
        center: coords,
        mapTypeId: google.maps.MapTypeId.ROADMAP,
        disableDoubleClickZoom: false,
        disableDefaultUI: true,
        zoomControl: false,
        draggable: true,
        scrollwheel: true,
        scaleControl: false,
        keyboardShortcuts: false,
      });

      google.maps.event.addListenerOnce(this.map, 'idle', () => {
        mapEle.classList.add('show-map');
        google.maps.event.trigger(this.map, 'resize');

        this.insertLocationButton();
        this.addUserMarker();
        this.loadMarkers();
      });

      google.maps.event.addListener(this.map, 'bounds_changed', () => {
        this.zone.run(() => {
          this.resizeMap();
        });
      });
    });
  }

  private insertLocationButton(){
    let controlDiv = document.createElement('div');
    let controlUI = document.createElement('button');
    controlUI.id = 'controlUI';
    controlUI.setAttribute('ion-button', '');
    controlUI.setAttribute('icon-only', '');
    controlUI.setAttribute('class','button button-md button-default button-default-md');
    controlDiv.appendChild(controlUI);

    let controlText = document.createElement('ion-icon');
    controlText.setAttribute('class','icon icon-md ion-md-locate');
    controlUI.appendChild(controlText);

    this.map.controls[google.maps.ControlPosition.RIGHT_BOTTOM].push(controlDiv);
    controlUI.addEventListener('click', () =>
      this.map.panTo(this.userPosition)
    );
  }

  public resizeMap(): void {
    setTimeout(() => {
      google.maps.event.trigger(this.map, 'resize');
    }, 200);
  }

  private loadMarkers(){
    this.markers.forEach(item =>{
      item.marker = this.addMarker(item.coords);
    })


  }

  private addUserMarker(){
    if(!this.userMarker){
      this.userMarker = this.addMarker(this.userPosition/*, CentralMapComponent.HUMAN*/);
      this.userMarker.setZIndex(99999);
      return;
    }
    this.resizeMap();
  }

  private addMarker(position: Coords, type?: number): any {
    return new google.maps.Marker({
      map: this.map,
      position: position,
      // icon: this.getIcon(type)
    });
  }

  // private getIcon(type: number): any{
  //   let img: string;
  //   switch(type){
  //     case CentralMapComponent.HUMAN: img = BASE64_IMG.HUMAN_IMG;
  //     break;
  //     case Place.BAR: img = BASE64_IMG.BAR_IMG;
  //     break;
  //     case Place.PIZZERIA: img = BASE64_IMG.PIZZERIA_IMG;
  //     break;
  //     case Place.RESTAURANT: img = BASE64_IMG.RESTAURANT_IMG;
  //     break;
  //   }
  //   return img;
  // }

//   private async createInfoWindow(
//     marker: any,
//     place: Place,
//     coords: Coords
//   ){
//     google.maps.event.addListener(marker, 'click', () =>{
//       let modal = this.modalCtrl.create(
//         PlaceDetailsPage,
//         {
//           place: place,
//           coords: coords
//         }
//       );
//       modal.present();
//     })
//   }
// }

}
