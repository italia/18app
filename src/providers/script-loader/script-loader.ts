import { Injectable} from '@angular/core';
import { Observable } from 'rxjs/Observable';
import { Observer } from 'rxjs/Observer';

import { ScriptModel } from '../../models';

@Injectable()
export class ScriptLoaderProvider {
    private scripts: ScriptModel[] = [];

    constructor(
    ){}

    public load(script: ScriptModel): Observable<ScriptModel> {
        return new Observable<ScriptModel>((observer: Observer<ScriptModel>) => {
            var existingScript = this.scripts.find(s => s.name == script.name);

            // Complete if already loaded
            if (existingScript) {
                observer.next(existingScript);
                observer.complete();
            }
            else {
                // Add the script
                this.scripts.push(script);

                // Load the script
                var scriptElement = document.createElement("script");
                scriptElement.type = "text/javascript";
                scriptElement.src = script.src;
                // scriptElement.async = true;
                // scriptElement.defer = true;

                scriptElement.onload = () => {
                    script.loaded = true;

                    observer.next(script);
                    observer.complete();
                };

                var s = script;
                scriptElement.onerror = (error: any) => {
                  if(!script.loaded){
                    scriptElement.remove();
                    this.load(s);
                  }
                  else observer.error("Couldn't load script " + script.src);
                };

                document.getElementsByTagName('body')[0].appendChild(scriptElement);
            }
        });
    }

    public loadGoogleMapsScript(): Observable<ScriptModel>{
      // this.network.
      let script: ScriptModel = new ScriptModel(
        'google-maps',
        'https://maps.googleapis.com/maps/api/js?key=AIzaSyDw2I3jyc3AeKFa16iCyMhZ3Wb5a44m-rE&v=3.29'
      );
      return this.load(script);
    }
}
