package com.ioxxy.a18app.fragment;

import android.graphics.Typeface;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import com.ioxxy.a18app.R;


public class Info extends Fragment {

    //Dichiarazione degli attributi grafici
    private TextView TextView1;
    private TextView TextView2;
    private TextView TextView3;
    private TextView TextView4;
    private TextView TextView5;
    private TextView TextView6;
    private TextView TextView7;
    private TextView TextView8;
    private TextView TextView9;
    private TextView TextView10;
    private TextView TextView11;
    private Typeface italic;
    private Typeface regular;


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {

        regular = Typeface.createFromAsset(getActivity().getAssets(), "fonts/TitilliumWeb-Regular.ttf");
        italic = Typeface.createFromAsset(getActivity().getAssets(), "fonts/TitilliumWeb-Italic.ttf");
        View v = inflater.inflate(R.layout.info_fragment, container, false);

        //Assegnazione degli attributi grafici
        TextView TextView1 = (TextView) v.findViewById(R.id.TextView1);
        TextView TextView2 = (TextView) v.findViewById(R.id.TextView2);
        TextView TextView3 = (TextView) v.findViewById(R.id.TextView3);
        TextView TextView4 = (TextView) v.findViewById(R.id.TextView4);
        TextView TextView5 = (TextView) v.findViewById(R.id.TextView5);
        TextView TextView6 = (TextView) v.findViewById(R.id.TextView6);
        TextView TextView7 = (TextView) v.findViewById(R.id.TextView7);
        TextView TextView8 = (TextView) v.findViewById(R.id.TextView8);
        TextView TextView9 = (TextView) v.findViewById(R.id.TextView9);
        TextView TextView10 = (TextView) v.findViewById(R.id.TextView10);
        TextView TextView11 = (TextView) v.findViewById(R.id.TextView11);
        TextView1.setTypeface(regular);
        TextView2.setTypeface(italic);
        TextView3.setTypeface(regular);
        TextView4.setTypeface(regular);
        TextView5.setTypeface(regular);
        TextView6.setTypeface(regular);
        TextView7.setTypeface(regular);
        TextView8.setTypeface(regular);
        TextView9.setTypeface(italic);
        TextView10.setTypeface(regular);
        TextView11.setTypeface(regular);

        ViewGroup rootView = (ViewGroup) inflater.inflate(R.layout.info_fragment, container, false);


        return rootView;
    }
}
