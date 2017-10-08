package com.ioxxy.a18app.fragment;

import android.Manifest;
import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Build;
import android.os.Bundle;
import android.support.v4.app.ActivityCompat;
import android.support.v4.app.Fragment;
import android.support.v7.app.AlertDialog;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;

import com.ioxxy.a18app.PlacesData;
import com.ioxxy.a18app.R;
import com.ioxxy.a18app.activity.DettagliNegozioActivity;
import com.ioxxy.a18app.activity.NuovoBuonoActivity;
import com.ioxxy.a18app.request.RequestDati;
import com.ioxxy.a18app.request.RequestListener;

import java.util.ArrayList;


public class Negozi extends Fragment {

    //Attributi per i GPS
    private LocationListener locationListener;
    private LocationManager locationManager;
    public static double lat = 0.;
    public static double lon = 0.;

    //Attributi grafici
    private ArrayList<String> placesList = new ArrayList<>();
    private ListView lw_places;
    private ArrayAdapter<String> placesAdapter;
    private ProgressBar progressBar;
    private PlacesData placesdata;
    private Button btn_nellevicinanze, btn_ricerca;
    private RelativeLayout rl_nellevicinanze, rl_ricerca;

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {

        //Dichiarazione del activity per il fragment
        ViewGroup rootView = (ViewGroup) inflater.inflate(R.layout.negozi_fragment, container, false);

        //Assegnazione degli attributi grafici
        lw_places = (ListView) rootView.findViewById(R.id.lw_places);
        progressBar = (ProgressBar) rootView.findViewById(R.id.progressBar);
        btn_nellevicinanze = (Button) rootView.findViewById(R.id.btn_nellevicinanze);
        btn_ricerca = (Button) rootView.findViewById(R.id.btn_ricerca);
        rl_nellevicinanze = (RelativeLayout) rootView.findViewById(R.id.rl_nellevicinanze);
        rl_ricerca = (RelativeLayout) rootView.findViewById(R.id.rl_ricerca);

        placesAdapter = new ArrayAdapter<>(getContext(), android.R.layout.simple_list_item_1, placesList);

        lw_places.setAdapter(placesAdapter);

        //Inizio metodi GPS
        locationManager = (LocationManager) getContext().getSystemService(Context.LOCATION_SERVICE);

        rl_nellevicinanze.setVisibility(View.VISIBLE);
        rl_ricerca.setVisibility(View.GONE);

        initListeners();

        progressBar.setVisibility(View.VISIBLE);
        lw_places.setVisibility(View.GONE);

        //Listeners GPS
        locationListener = new LocationListener() {
            @Override
            public void onLocationChanged(Location location) {
                lat = location.getLatitude();
                lon = location.getLongitude();
               /*Geocoder gcd = new Geocoder(getApplicationContext(), Locale.getDefault());
               gcd.getFromLocation(lat, lon, 1).get(0).getAddressLine(0)*/

                RequestDati request = new RequestDati();
                request.getIndirizzi(lw_places.getContext(), new RequestListener() {
                    @Override
                    public void onResponse(PlacesData placesdata1) {
                        placesList.addAll(placesdata1.getNome());
                        placesAdapter.notifyDataSetChanged();
                        placesdata = placesdata1;
                    }
                }, lat, lon);
                progressBar.setVisibility(View.GONE);
                lw_places.setVisibility(View.VISIBLE);
            }

            @Override
            public void onStatusChanged(String s, int i, Bundle bundle) {
            }

            @Override
            public void onProviderEnabled(String s) {
            }

            @Override
            public void onProviderDisabled(String s) {
                progressBar.setVisibility(View.GONE);
                AlertDialog alert = new AlertDialog.Builder(getContext())
                        .setTitle("GPS Disabilitato")
                        .setMessage("Il GPS è disabilitato. Attivalo per trovare i negozi vicino a te")
                        .setPositiveButton("OK", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int which) {
                                getActivity().finish();
                            }
                        })
                        .show();
                alert.setCancelable(false);
            }
        };

        //Controllo dei permessi
        if (ActivityCompat.checkSelfPermission(getContext(), Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED && ActivityCompat.checkSelfPermission(getContext(), Manifest.permission.ACCESS_COARSE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
            checkPermission();
        } else {
            //Se ci sono i permessi fa una richiesta singola per prenderla una volta sola
            locationManager.requestSingleUpdate(LocationManager.NETWORK_PROVIDER, locationListener, null);
        }

        return rootView;
    }

    private void checkPermission() {
        //Controllo dei permessi GPS
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            if (ActivityCompat.checkSelfPermission(getContext(), android.Manifest.permission.ACCESS_COARSE_LOCATION) != PackageManager.PERMISSION_GRANTED && ActivityCompat.checkSelfPermission(getContext(), android.Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
                requestPermissions(new String[]{Manifest.permission.ACCESS_COARSE_LOCATION, Manifest.permission.ACCESS_FINE_LOCATION}, 1);
            }
        }
    }

    private void initListeners() {
        lw_places.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                Intent i = new Intent(getContext(), DettagliNegozioActivity.class);
                i.putExtra("nome", placesdata.getNome().get(position));
                i.putExtra("indirizzo", placesdata.getIndirizzo().get(position));
                i.putExtra("lat", placesdata.getLat().get(position));
                i.putExtra("lon", placesdata.getLng().get(position));
                i.putExtra("type", placesdata.getType().get(position));
                startActivity(i);
            }
        });

        btn_nellevicinanze.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                rl_nellevicinanze.setVisibility(View.VISIBLE);
                rl_ricerca.setVisibility(View.GONE);
            }
        });
        btn_ricerca.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                rl_nellevicinanze.setVisibility(View.GONE);
                rl_ricerca.setVisibility(View.VISIBLE);
            }
        });
    }
}

