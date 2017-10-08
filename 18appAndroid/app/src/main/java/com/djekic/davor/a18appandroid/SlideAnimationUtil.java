package com.djekic.davor.a18appandroid;

import android.content.Context;
import android.view.View;
import android.view.animation.AnimationUtils;


public class SlideAnimationUtil {

    public static void slideInFromLeft(Context context, View view) {
        runSimpleAnimation(context, view, R.animator.slide_from_left);
    }

    public static void slideOutToLeft(Context context, View view) {
        runSimpleAnimation(context, view, R.animator.slide_to_left);
    }

    public static void slideInFromRight(Context context, View view) {
        runSimpleAnimation(context, view, R.animator.slide_from_right);
    }


    public static void slideOutToRight(Context context, View view) {
        runSimpleAnimation(context, view, R.animator.slide_to_right);
    }

    private static void runSimpleAnimation(Context context, View view, int animationId) {
        view.startAnimation(AnimationUtils.loadAnimation(
                context, animationId
        ));
    }

}
