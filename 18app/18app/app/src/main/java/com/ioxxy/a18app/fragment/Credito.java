package com.ioxxy.a18app.fragment;

import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.location.LocationManager;
import android.support.design.widget.FloatingActionButton;
import android.support.v4.app.Fragment;
import android.os.Bundle;
import android.support.v4.view.ViewPager;
import android.support.v7.app.AlertDialog;
import android.support.v7.widget.CardView;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Toast;

import com.ioxxy.a18app.PlacesData;
import com.ioxxy.a18app.R;
import com.ioxxy.a18app.activity.DettagliNegozioActivity;
import com.ioxxy.a18app.activity.NuovoBuonoActivity;
import com.ioxxy.a18app.request.RequestDati;
import com.ioxxy.a18app.request.RequestListener;


public class Credito extends Fragment {

    //Dichiarazione attributi grafici
    private FloatingActionButton fab_new;
    private CardView btn_nelNegozio;
    private ViewPager viewPager;


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {

        //Assegnazione del rootView del fragment e degli attributi grafici
        ViewGroup rootView = (ViewGroup) inflater.inflate(R.layout.nuovobuono_fragment, container, false);

        fab_new = (FloatingActionButton) rootView.findViewById(R.id.fab_new);
        btn_nelNegozio = (CardView) rootView.findViewById(R.id.btn_negvicini);
        viewPager = (ViewPager) getActivity().findViewById(R.id.viewPager);

        //Metodo per il listeners dei bottoni
        initListeners();

        return rootView;
    }

    private void initListeners() {

        fab_new.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(getContext(), NuovoBuonoActivity.class));
            }
        });

        btn_nelNegozio.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (Negozi.lat != 0. && Negozi.lon != 0.) {
                    RequestDati request = new RequestDati();
                    request.getIndirizzi(getContext(), new RequestListener() {
                        @Override
                        public void onResponse(final PlacesData placesdata1) {
                            AlertDialog alert = new AlertDialog.Builder(getContext())
                                    .setTitle(placesdata1.getNome().get(0))
                                    .setMessage("Ti trovi in questo negozio: " + placesdata1.getNome().get(0) + " (" + placesdata1.getIndirizzo().get(0) + ") ?")
                                    .setPositiveButton("SI", new DialogInterface.OnClickListener() {
                                        @Override
                                        public void onClick(DialogInterface dialog, int which) {
                                            Intent i = new Intent(getContext(), DettagliNegozioActivity.class);
                                            i.putExtra("nome", placesdata1.getNome().get(0));
                                            i.putExtra("indirizzo", placesdata1.getIndirizzo().get(0));
                                            i.putExtra("lat", placesdata1.getLat().get(0));
                                            i.putExtra("lon", placesdata1.getLng().get(0));
                                            i.putExtra("type", placesdata1.getType().get(0));
                                            startActivity(i);
                                        }
                                    })
                                    .setNegativeButton("NO", new DialogInterface.OnClickListener() {
                                        @Override
                                        public void onClick(DialogInterface dialog, int which) {
                                            Toast.makeText(getContext(), "Trova il tuo negozio", Toast.LENGTH_SHORT).show();
                                            viewPager.setCurrentItem(1, true);
                                        }
                                    })
                                    .show();
                            alert.setCancelable(false);
                        }
                    }, Negozi.lat, Negozi.lon);
                } else {
                    final LocationManager manager = (LocationManager) getContext().getSystemService(Context.LOCATION_SERVICE);
                    if (!manager.isProviderEnabled(LocationManager.GPS_PROVIDER)) {
                        Toast.makeText(getContext(), "Attiva il GPS", Toast.LENGTH_SHORT).show();
                    }
                }
            }
        });
    }
}
