export class Coords{

  private static earthRadius: number = 6372000;

  constructor(public lat: number, public lng: number){}

  public equal(coords: Coords): boolean{
    return this.lat == coords.lat && this.lng == coords.lng;
  }

  public static equal(coords1: Coords, coords2: Coords): boolean{
    return coords1.lat == coords2.lat && coords1.lng == coords2.lng;
  }

  public calculateDistance(coords: Coords):  number{
    let lat1: number = this.toRadians(this.lat);
    let lat2: number = this.toRadians(coords.lat);
    let lng1: number = this.toRadians(this.lng);
    let lng2: number = this.toRadians(coords.lng);

    return (Coords.earthRadius * (Math.acos(Math.sin(lat1) * Math.sin(lat2) +
    Math.cos(lat1) * Math.cos(lat2) * Math.cos(Math.abs(lng2 - lng1)))));
  }

  public toRadians(val: number): number{
    return val * Math.PI / 180;
  }
}
