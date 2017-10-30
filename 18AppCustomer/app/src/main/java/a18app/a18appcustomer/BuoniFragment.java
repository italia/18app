package a18app.a18appcustomer;

import android.os.Bundle;
import android.support.annotation.Nullable;
import android.app.Fragment;
import android.support.v7.widget.DefaultItemAnimator;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Toast;

import java.util.ArrayList;

/**
 * Created by Andrea on 09/10/2017.
 */

public class BuoniFragment extends android.support.v4.app.Fragment {

    private View view;


    public BuoniFragment() {}



    @Override
    @Nullable
    public View onCreateView(@Nullable LayoutInflater inflater, @Nullable ViewGroup container,
                             @Nullable Bundle savedInstanceState) {
        view = inflater.inflate(R.layout.buoni_fragments, container, false );
        setupRecyclerView();
        return view;
    }


    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
    }


    private void setupRecyclerView(){
        //Initialize the Movies List View as RecyclerView
        RecyclerView recyclerView = (RecyclerView) view.findViewById(R.id.recycler_view_buoni);
        recyclerView.setHasFixedSize(false);
        RecyclerView.LayoutManager mLayoutManager = new LinearLayoutManager(view.getContext());
        recyclerView.setLayoutManager(mLayoutManager);
        recyclerView.addItemDecoration(new DividerItemDecoration(view.getContext(), LinearLayoutManager.VERTICAL));
        recyclerView.setItemAnimator(new DefaultItemAnimator());

        //Setup the movies
        BuoniAdapter bAdapter = new BuoniAdapter(new ArrayList<>());
        bAdapter.prepareBuoniData();

        bAdapter.notifyDataSetChanged();

        //Finish up with the final setup
        recyclerView.setAdapter(bAdapter);

        //Setup Touch Feedback
        recyclerView.addOnItemTouchListener(new RecyclerTouchListener(getContext(),
                recyclerView, new RecyclerTouchListener.ClickListener(){
            @Override
            public void onClick(View view, int position) {
                Buono buono = bAdapter.getBuoni().get(position);
                Toast.makeText(
                        getContext(),
                        buono.getTitle() + " is selected!", Toast.LENGTH_SHORT)
                        .show();
            }

            @Override
            public void onLongClick(View view, int position) {

            }
        }));



    }

}

