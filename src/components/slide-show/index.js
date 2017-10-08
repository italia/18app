import React, { Component } from 'react';
import {
    Platform,
    StyleSheet,
    Text,
    View,
    Dimensions
} from 'react-native'
import FadingSlides from 'react-native-fading-slides';

const { width, height } = Dimensions.get("window")

const slides = [
    {
        image: require('../../assets/bg-concerti.png'),
        imageWidth: width,
        imageHeight: height,
        title: 'Hello World',
        subtitle: 'This is a beautiful world',
        titleColor: '#fff',
        subtitleColor: '#fff'
    }
];

export default class Slide extends Component {
    render() {
        return (
            <FadingSlides
                slides={slides}
                fadeDuration={1200}
                stillDuration={2000}
                height={height} />
        );
    }
}
