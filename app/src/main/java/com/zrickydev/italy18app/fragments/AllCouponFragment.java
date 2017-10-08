package com.zrickydev.italy18app.fragments;

import android.os.Bundle;
import android.app.Fragment;
import android.support.v7.widget.DefaultItemAnimator;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import com.zrickydev.italy18app.R;
import com.zrickydev.italy18app.adapters.ViewCouponItemAdapter;
import com.zrickydev.italy18app.interfaces.OnItemClickListener;
import com.zrickydev.italy18app.models.CouponItem;
import com.zrickydev.italy18app.models.Item;

import java.util.ArrayList;

public class AllCouponFragment extends Fragment {

    private RecyclerView rvAllCoupon;
    private RecyclerView.LayoutManager layoutManager;
    private ArrayList<CouponItem> items = new ArrayList<>();
    private ViewCouponItemAdapter viewCouponItemAdapter;

    public AllCouponFragment() {}

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View v = inflater.inflate(R.layout.fragment_all_coupon, container, false);

        rvAllCoupon = v.findViewById(R.id.rv_all_coupon);

        layoutManager = new LinearLayoutManager(getActivity().getApplicationContext());
        viewCouponItemAdapter = new ViewCouponItemAdapter(items, new OnItemClickListener() {
            @Override
            public void onItemClick(Item item) {

            }

            @Override
            public void onCouponItemClick(CouponItem item) {

            }
        });

        setupRecyclerView();
        prepareCategoryAdapter();

        return v;
    }

    private void setupRecyclerView() {
        rvAllCoupon.setLayoutManager(layoutManager);
        rvAllCoupon.setItemAnimator(new DefaultItemAnimator());
        rvAllCoupon.setAdapter(viewCouponItemAdapter);
    }

    private void prepareCategoryAdapter() {
        //TODO: Change data entry making a server request to populate recyclerview

        items.clear();
        items.add(new CouponItem(1, "Cinema", "Biglietto d'Ingresso", "", R.drawable.icon_cinema, R.drawable.icon_cinema_gray, 8.00, true));
        items.add(new CouponItem(2, "Concerti", "Biglietto d'Ingresso", "", R.drawable.icon_concerti, R.drawable.icon_concerti_gray, 56.00, true));
        items.add(new CouponItem(3, "Teatro e danza", "Abbonamento / Card", "", R.drawable.icon_teatro, R.drawable.icon_teatro_gray, 128.00, true));
        items.add(new CouponItem(4, "Libri", "ebook", "Libreria Leggidipiu'", R.drawable.icon_libri, R.drawable.icon_libri_gray, 5.00, false));
        items.add(new CouponItem(5, "Cinema", "Abbonamento / Card", "Nuovo Cinema Paradiso", R.drawable.icon_cinema, R.drawable.icon_cinema_gray, 99.00, false));
        viewCouponItemAdapter.notifyDataSetChanged();
    }

}
