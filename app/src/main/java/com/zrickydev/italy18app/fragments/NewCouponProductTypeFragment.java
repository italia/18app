package com.zrickydev.italy18app.fragments;

import android.os.Bundle;
import android.app.Fragment;
import android.support.v7.widget.DefaultItemAnimator;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import com.pixplicity.easyprefs.library.Prefs;
import com.zrickydev.italy18app.Config;
import com.zrickydev.italy18app.R;
import com.zrickydev.italy18app.adapters.NewCouponItemAdapter;
import com.zrickydev.italy18app.interfaces.OnItemClickListener;
import com.zrickydev.italy18app.models.CouponItem;
import com.zrickydev.italy18app.models.Item;

import java.util.ArrayList;

public class NewCouponProductTypeFragment extends Fragment {

    private RecyclerView rvNewCouponProductType;
    private ArrayList<Item> items = new ArrayList<>();
    private NewCouponItemAdapter newCouponItemAdapter;

    private ImageView ivBackButton;
    private ImageView ivIcon;
    private TextView tvTitle;

    public NewCouponProductTypeFragment() {}

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View v = inflater.inflate(R.layout.fragment_new_coupon_product_type, container, false);

        rvNewCouponProductType = v.findViewById(R.id.rv_new_coupon_product_type);
        ivBackButton = v.findViewById(R.id.iv_back_button);
        ivIcon = v.findViewById(R.id.iv_icon);
        tvTitle = v.findViewById(R.id.tv_title);

        newCouponItemAdapter = new NewCouponItemAdapter(items, new OnItemClickListener() {
            @Override
            public void onItemClick(Item item) {
                Prefs.putInt(Config.PREFS_ITEM_CATEGORY_ID, item.getId());
                Prefs.putString(Config.PREFS_ITEM_CATEGORY_TITLE, item.getTitle());
                Prefs.putInt(Config.PREFS_ITEM_CATEGORY_ICON, item.getIcon());

                NewCouponValueFragment fragment = new NewCouponValueFragment();
                getFragmentManager().beginTransaction().addToBackStack(null).replace(R.id.content, fragment).commit();
            }

            @Override
            public void onCouponItemClick(CouponItem item) {

            }
        });

        RecyclerView.LayoutManager layoutManager = new LinearLayoutManager(getActivity().getApplicationContext());

        rvNewCouponProductType.setLayoutManager(layoutManager);
        rvNewCouponProductType.setItemAnimator(new DefaultItemAnimator());
        rvNewCouponProductType.setAdapter(newCouponItemAdapter);

        setupBackButton();

        ivIcon.setImageResource(Prefs.getInt(Config.PREFS_ITEM_ICON, 0));
        tvTitle.setText(Prefs.getString(Config.PREFS_ITEM_TITLE, null));

        prepareProductType();

        return v;
    }

    private void setupBackButton() {
        ivBackButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                getActivity().onBackPressed();
            }
        });
    }

    private void prepareProductType() {
        //TODO: Change data entry making a server request to populate recyclerview

        items.clear();
        items.add(new Item(1, "Abbonamento/Card", R.drawable.icon_gift));
        items.add(new Item(2, "Biglietto d'ingresso", R.drawable.icon_tickets));
        newCouponItemAdapter.notifyDataSetChanged();
    }
}
