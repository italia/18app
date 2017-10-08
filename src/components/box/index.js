import React, { Component } from 'react';
import { AppRegistry, View, StyleSheet, Dimensions, Platform, Image } from 'react-native'
import Testo from '../testo'

const { width, height } = Dimensions.get('window')

class Box extends Component {
    render() {
        return (
            <View style={styles.container}>
                <Image style={{ width:24, height:24 }} source={require('../../assets/icon.png')} />
                <Testo bold align='center'>18app</Testo>
            </View>
        );
    }
}

const styles = StyleSheet.create({
    container: {
        flex: 0,
        flexDirection: 'row',
        backgroundColor: 'rgb(0, 102, 204)',
        height: Platform.select({
            ios: 68,
            android: 48
        }),
        paddingTop: Platform.select({
            ios: 20,
            android: 0
        }),
        zIndex: 1,
        justifyContent: 'center',
        alignItems: 'center'
    }
});

export default Box;