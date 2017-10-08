package com.djekic.davor.a18appandroid;

import android.support.v4.app.FragmentActivity;
import android.os.Bundle;

import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.OnMapReadyCallback;
import com.google.android.gms.maps.SupportMapFragment;
import com.google.android.gms.maps.model.BitmapDescriptorFactory;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.MarkerOptions;

public class MapsActivity extends FragmentActivity implements OnMapReadyCallback {

    private GoogleMap mMap;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_maps);
        // Obtain the SupportMapFragment and get notified when the map is ready to be used.
        SupportMapFragment mapFragment = (SupportMapFragment) getSupportFragmentManager()
                .findFragmentById(R.id.map);
        mapFragment.getMapAsync(this);
    }


    /**
     * Manipulates the map once available.
     * This callback is triggered when the map is ready to be used.
     * This is where we can add markers or lines, add listeners or move the camera. In this case,
     * we just add a marker near Sydney, Australia.
     * If Google Play services is not installed on the device, the user will be prompted to install
     * it inside the SupportMapFragment. This method will only be triggered once the user has
     * installed Google Play services and returned to the app.
     */
    @Override
    public void onMapReady(GoogleMap googleMap) {
        mMap = googleMap;

        // Add a marker in Sydney and move the camera
        LatLng Venice = new LatLng(45 , 12);
        LatLng Cafoscari   = new LatLng(45.4338015,12.327946300000008);
        LatLng SanMarco= new LatLng(45.43432813273708,12.33466386795044);
        LatLng Libreria_antiquaria_Emiliana= new LatLng(45.436345,12.326663999999937);
        LatLng Libreria_Marco_Polo= new LatLng(45.4335722,12.322574099999997);

        mMap.addMarker(new MarkerOptions().position(Venice).icon(BitmapDescriptorFactory.defaultMarker(BitmapDescriptorFactory.HUE_AZURE)).title("Marker in Venice"));
        mMap.addMarker(new MarkerOptions().position(Cafoscari).title("Marker in Cafoscari"));
        mMap.addMarker(new MarkerOptions().position(SanMarco).title("Marker in SanMarco"));
        mMap.addMarker(new MarkerOptions().position(Libreria_antiquaria_Emiliana).title("Marker in Libreria_antiquaria_Emiliana"));
        mMap.addMarker(new MarkerOptions().position(Libreria_Marco_Polo).title("Marker in Libreria_Marco_Polo"));

        mMap.moveCamera(CameraUpdateFactory.newLatLng(Venice));
    }
}
