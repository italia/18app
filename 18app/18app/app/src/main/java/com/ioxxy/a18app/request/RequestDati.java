package com.ioxxy.a18app.request;

import android.content.Context;
import android.util.Log;

import com.android.volley.Request;
import com.android.volley.RequestQueue;
import com.android.volley.Response;
import com.android.volley.VolleyError;
import com.android.volley.toolbox.StringRequest;
import com.android.volley.toolbox.Volley;
import com.ioxxy.a18app.PlacesData;

import org.json.JSONException;
import org.json.JSONObject;

import java.util.ArrayList;

public class RequestDati {

    //Questa classe serve per fare le richieste GET con la libreria Volley alle api di Google Place.
    //Utilizza una interfaccia per non passare il context come parametro e occupare memoria

    //Costruttore
    public RequestDati() {

    }

    //Metodo main
    public void getIndirizzi(final Context context, final RequestListener requestListener, double lat, final double lon) {

        //Inserimento dell'url
        RequestQueue queue = Volley.newRequestQueue(context);
        String url = "https://maps.googleapis.com/maps/api/place/nearbysearch/json?location="
                + lat + "," + lon + "&radius=800&type=book_store&museum&movie_theater&key=AIzaSyCLAfE9R8QuCLKZCQcV4SdhL9EBTKhPX24";

        StringRequest stringRequest = new StringRequest(Request.Method.GET, url, new Response.Listener<String>() {
            @Override
            public void onResponse(String response) {
                JSONObject obj = null;

                try {
                    //Smistamento dei dati nel JSON
                    ArrayList<String> nome = new ArrayList<>();
                    ArrayList<String> lat = new ArrayList<>();
                    ArrayList<String> lng = new ArrayList<>();
                    ArrayList<String> indirizzi = new ArrayList<>();
                    ArrayList<String> type = new ArrayList<>();

                    obj = new JSONObject(response);
                    for (int i = 0; i < obj.getJSONArray("results").length(); i++) {
                        nome.add(obj.getJSONArray("results").getJSONObject(i).getString("name"));
                        lat.add(obj.getJSONArray("results").getJSONObject(i).getJSONObject("geometry").getJSONObject("location").getString("lat"));
                        lng.add(obj.getJSONArray("results").getJSONObject(i).getJSONObject("geometry").getJSONObject("location").getString("lng"));
                        indirizzi.add(obj.getJSONArray("results").getJSONObject(i).getString("vicinity"));
                        type.add(obj.getJSONArray("results").getJSONObject(i).getJSONArray("types").getString(0));
                    }

                    //Richiamo un oggetto che mi tiene le informazioni dai json e poi lo passo all'interfaccia
                    PlacesData placesdata = new PlacesData(nome, indirizzi, lat, lng, type);
                    requestListener.onResponse(placesdata);

                } catch (JSONException e) {
                    e.printStackTrace();
                }
            }
        }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {

            }
        });

        //Invio della richiesta
        queue.add(stringRequest);
    }
}