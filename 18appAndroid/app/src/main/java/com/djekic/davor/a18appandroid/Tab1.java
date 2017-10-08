package com.djekic.davor.a18appandroid;

/**
 * Created by Dario Carraro on 08/10/2017.
 */

import android.content.DialogInterface;
import android.content.Intent;
import android.support.v4.app.Fragment;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;

public class Tab1 extends Fragment {


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        final View view = inflater.inflate(R.layout.tab1, container, false);
        Button test = (Button) view.findViewById(R.id.btnMaps);
        test.setOnClickListener(new View.OnClickListener()
        {
            @Override
            public void onClick(View v) {
                switch (v.getId()) {

                    case R.id.button1:
                        Intent intent1 = new Intent(view.getContext(), MapsActivity.class);
                        startActivity(intent1);
                        break;
                }
                //startActivity(i);
            }
        });

        return view;
    }
}

