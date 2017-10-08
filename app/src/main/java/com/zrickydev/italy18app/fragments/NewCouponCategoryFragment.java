package com.zrickydev.italy18app.fragments;

import android.os.Bundle;
import android.app.Fragment;
import android.support.v7.widget.DefaultItemAnimator;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;

import com.pixplicity.easyprefs.library.Prefs;
import com.zrickydev.italy18app.Config;
import com.zrickydev.italy18app.R;
import com.zrickydev.italy18app.models.CouponItem;
import com.zrickydev.italy18app.models.Item;
import com.zrickydev.italy18app.adapters.NewCouponItemAdapter;
import com.zrickydev.italy18app.interfaces.OnItemClickListener;

import java.util.ArrayList;

public class NewCouponCategoryFragment extends Fragment {

    private RecyclerView rvNewCouponCategory;
    private RecyclerView.LayoutManager layoutManager;
    private ArrayList<Item> items = new ArrayList<>();
    private NewCouponItemAdapter newCouponItemAdapter;

    private ImageView ivBackButton;


    public NewCouponCategoryFragment() {}


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View v = inflater.inflate(R.layout.fragment_new_coupon_category, container, false);

        rvNewCouponCategory = v.findViewById(R.id.rv_new_coupon_category);
        ivBackButton = v.findViewById(R.id.iv_back_button);

        layoutManager = new LinearLayoutManager(getActivity().getApplicationContext());
        newCouponItemAdapter = new NewCouponItemAdapter(items, new OnItemClickListener() {
            @Override
            public void onItemClick(Item item) {
                //TODO: Call network endpoint from here

                Prefs.putInt(Config.PREFS_ITEM_ID, item.getId());
                Prefs.putString(Config.PREFS_ITEM_TITLE, item.getTitle());
                Prefs.putInt(Config.PREFS_ITEM_ICON, item.getIcon());

                NewCouponProductTypeFragment fragment = new NewCouponProductTypeFragment();
                getFragmentManager().beginTransaction().addToBackStack(null).replace(R.id.content, fragment).commit();
            }

            @Override
            public void onCouponItemClick(CouponItem item) {

            }
        });

        setupBackButton();
        setupRecyclerView();
        prepareCategoryAdapter();

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

    private void setupRecyclerView() {
        rvNewCouponCategory.setLayoutManager(layoutManager);
        rvNewCouponCategory.setItemAnimator(new DefaultItemAnimator());
        rvNewCouponCategory.setAdapter(newCouponItemAdapter);
    }

    private void prepareCategoryAdapter() {
        //TODO: Change data entry making a server request to populate recyclerview

        items.clear();
        items.add(new Item(1, "Cinema", R.drawable.icon_cinema));
        items.add(new Item(2, "Concerti", R.drawable.icon_concerti));
        items.add(new Item(3, "Eventi culturali", R.drawable.icon_eventi));
        items.add(new Item(4, "Libri", R.drawable.icon_libri));
        items.add(new Item(5, "Musei, monumenti, parchi culturali", R.drawable.icon_musei));
        items.add(new Item(6, "Teatro e danza", R.drawable.icon_teatro));
        newCouponItemAdapter.notifyDataSetChanged();
    }

    @Override
    public void onDestroyView() {
        super.onDestroyView();
    }
}
