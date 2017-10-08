package com.ioxxy.a18app.request;

import com.ioxxy.a18app.PlacesData;

import java.util.ArrayList;

public interface RequestListener {
    //Interfaccia richiamata dal main
    public void onResponse(PlacesData placesdata);
}
