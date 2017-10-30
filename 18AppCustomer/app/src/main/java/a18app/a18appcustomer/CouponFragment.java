package a18app.a18appcustomer;

import android.os.Bundle;
import android.support.annotation.Nullable;
import android.support.v4.app.Fragment;
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

public class CouponFragment extends Fragment {

    private View view;


    public CouponFragment() {}

    /**
     * Create a new instance of Fragment with a specific view of the list, specifying the state to remove <p>
     * <b>1</b> for <i>"GIA' SPESI"</i>, i.e. remove <b>"DA SPENDERE"</b>
     * <b>0</b> for <i>'DA SPENDERE'</i>, i.e. remove <b>"GIA' SPESI"</b>
     */
    public static CouponFragment newInstance(int state) {
        CouponFragment f = new CouponFragment();
        // Supply index input as an argument.
        Bundle args = new Bundle();
        args.putInt("state", state);
        f.setArguments(args);
        return f;
    }


    @Override
    @Nullable
    public View onCreateView(@Nullable LayoutInflater inflater, @Nullable ViewGroup container,
                             @Nullable Bundle savedInstanceState) {
        view = inflater.inflate(R.layout.coupon_fragment_single, container, false );
        setupRecyclerView();
        return view;
    }


    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
    }


    private void setupRecyclerView(){
        //Initialize the Movies List View as RecyclerView
        RecyclerView recyclerView = (RecyclerView) view.findViewById(R.id.recycler_view);
        recyclerView.setHasFixedSize(false);
        RecyclerView.LayoutManager mLayoutManager = new LinearLayoutManager(view.getContext());
        recyclerView.setLayoutManager(mLayoutManager);
        recyclerView.addItemDecoration(new DividerItemDecoration(view.getContext(), LinearLayoutManager.VERTICAL));
        recyclerView.setItemAnimator(new DefaultItemAnimator());

        //Setup the movies
        MoviesAdapter mAdapter = new MoviesAdapter(new ArrayList<>());
        mAdapter.prepareMovieData();

        int state =-1;
        try {
           state =  (int) this.getArguments().get("state");
        }catch(Exception e){
            state = -1;
        }

        if(state>=0){mAdapter.removeAll(state);}


        mAdapter.notifyDataSetChanged();

        //Finish up with the final setup
        recyclerView.setAdapter(mAdapter);

        //Setup Touch Feedback
        recyclerView.addOnItemTouchListener(new RecyclerTouchListener(getContext(),
                recyclerView, new RecyclerTouchListener.ClickListener(){
            @Override
            public void onClick(View view, int position) {
                Movie movie = mAdapter.getMovies().get(position);
                Toast.makeText(
                        getContext(),
                        movie.getTitle() + " is selected!", Toast.LENGTH_SHORT)
                        .show();
            }

            @Override
            public void onLongClick(View view, int position) {

            }
        }));



    }

}

