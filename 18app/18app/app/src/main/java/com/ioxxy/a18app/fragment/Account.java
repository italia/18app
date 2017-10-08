package com.ioxxy.a18app.fragment;

import android.graphics.Typeface;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;

import com.ioxxy.a18app.R;


public class Account extends Fragment {

    //Dichiarazione degli attributi grafici
    private TextView txt1;
    private TextView txt2;
    private TextView txt3;
    private TextView txt4;
    private TextView txt5;
    private TextView txt6;
    private TextView txt7;
    private TextView txt8;
    private TextView txt9;
    private TextView txt10;
    private TextView txt11;
    private Typeface regular;
    private Button logout;

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {

        //Assegnazione dei font e della rootView del fragment
        regular = Typeface.createFromAsset(getActivity().getAssets(), "fonts/TitilliumWeb-Regular.ttf");
        ViewGroup rootView = (ViewGroup) inflater.inflate(R.layout.account_fragment, container, false);

        //Assegnazione degli attributi grafici
        logout = (Button) rootView.findViewById(R.id.logout);
        TextView txt1 = (TextView) rootView.findViewById(R.id.txt1);
        TextView txt2 = (TextView) rootView.findViewById(R.id.txt2);
        TextView txt3 = (TextView) rootView.findViewById(R.id.txt3);
        TextView txt4 = (TextView) rootView.findViewById(R.id.txt4);
        TextView txt5 = (TextView) rootView.findViewById(R.id.txt5);
        TextView txt6 = (TextView) rootView.findViewById(R.id.txt6);
        TextView txt7 = (TextView) rootView.findViewById(R.id.txt7);
        TextView txt8 = (TextView) rootView.findViewById(R.id.txt8);
        TextView txt9 = (TextView) rootView.findViewById(R.id.txt9);
        TextView txt10 = (TextView) rootView.findViewById(R.id.txt10);
        TextView txt11 = (TextView) rootView.findViewById(R.id.txt11);
        txt1.setTypeface(regular);
        txt2.setTypeface(regular);
        txt3.setTypeface(regular);
        txt4.setTypeface(regular);
        txt5.setTypeface(regular);
        txt6.setTypeface(regular);
        txt7.setTypeface(regular);
        txt8.setTypeface(regular);
        txt9.setTypeface(regular);
        txt10.setTypeface(regular);
        txt11.setTypeface(regular);


        logout.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                getActivity().finish();
            }
        });


        return rootView;
    }
}
