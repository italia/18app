package com.ioxxy.a18app.fragment;

import android.content.Intent;
import android.graphics.Typeface;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import android.widget.TextView;

import com.ioxxy.a18app.R;
import com.ioxxy.a18app.activity.VoucherActivity;

public class Buoni extends Fragment {

    //Dichiarazione attributi grafici
    private TextView ic;
    private Typeface regular;
    private RelativeLayout opt1;
    private RelativeLayout opt2;
    private RelativeLayout opt3;


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {

        //Assegnazione del font
        regular = Typeface.createFromAsset(getActivity().getAssets(), "fonts/TitilliumWeb-Regular.ttf");

        //Assegnazione della rootView del fragment
        ViewGroup rootView = (ViewGroup) inflater.inflate(R.layout.buoni_fragment, container, false);
        View v = inflater.inflate(R.layout.buoni_fragment, container, false);
        TextView ic = (TextView) v.findViewById(R.id.ic);
        ic.setTypeface(regular);

        //Assegnazione degli attributi grafici
        opt1 = (RelativeLayout) rootView.findViewById(R.id.opt1);
        opt2 = (RelativeLayout) rootView.findViewById(R.id.opt2);
        opt3 = (RelativeLayout) rootView.findViewById(R.id.opt3);

        //Listener dei bottoni
        initListener();

        return rootView;
    }

    private void initListener() {
        opt1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i = new Intent(getContext(), VoucherActivity.class);
                i.putExtra("valore", "8");
                i.putExtra("nome", "");
                i.putExtra("type", "movie_theatre");
                startActivity(i);
            }
        });
        opt2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i = new Intent(getContext(), VoucherActivity.class);
                i.putExtra("valore", "56");
                i.putExtra("nome", "");
                i.putExtra("type", "movie_theatre");
                startActivity(i);
            }
        });
        opt3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i = new Intent(getContext(), VoucherActivity.class);
                i.putExtra("valore", "128");
                i.putExtra("nome", "");
                i.putExtra("type", "movie_theatre");
                startActivity(i);
            }
        });
    }
}
