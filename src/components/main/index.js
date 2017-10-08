import React, { Component } from 'react';
import {
    Platform,
    StyleSheet,
    Text,
    View,
    Dimensions,
    Image
} from 'react-native'

import Testo from '../testo';
import SlideShowText from '../slide-show-text'
import Button from '../button'

const { width, height } = Dimensions.get("window")

export default class Homepage extends Component {
    render() {
        return (
            <View style={{ backgroundColor: 'transparent', flex: 1, width, marginBottom: 64, alignContent: 'center', alignItems: 'center', justifyContent: 'center' }}>

                <View style={{ flex: 1, zIndex: 1, justifyContent: 'center', alignItems: 'center' }}>
                    <Testo bold size='large'>Hai 18 anni?</Testo>
                    <Testo size='small' >Per te</Testo>
                    <Testo bold size='large' >500</Testo>
                    <Testo size='small' >Per te</Testo>
                    <SlideShowText text={['cinema', 'libri', 'concerti']} />
                </View>

                <View style={{ flex: 0, width, height: 60, zIndex: 1, justifyContent: 'space-around', alignItems: 'center', flexDirection: 'row' }}>
                    <Button size='small' title='INFORMAZIONI' />
                    <Button size='small' title='NON HAI SPID?' />
                </View> 
                
                <Image source={require('../../assets/bg-concerti.png')} style={{ position: 'absolute', width, height, resizeMode: 'cover', zIndex: 0 }} />
            </View>
        )
    }
}