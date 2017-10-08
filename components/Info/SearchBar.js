import React, { Component } from 'react';
import { View, StyleSheet, Text, TextInput } from 'react-native';
import styles from "../../style/colors";

import Icon from 'react-native-vector-icons/MaterialIcons';

class SearchBar extends Component {
    render() {
        const SearchIcon = (
            <Icon name="search" size={30} color={'#A9B1B8'} />
        );

        return (
            <View style={[stylesI.row, {
                flexDirection: 'row',
                justifyContent: 'center',
                alignItems: 'center',
            }]}>
                <Icon style={stylesI.icon} name="search" size={30} color={'#A9B1B8'} />
                <TextInput style={stylesI.inputBox} placeholder="Cerca" onChangeText={() => { }} />
            </View>
        );
    }
}

export default SearchBar;

const stylesI = StyleSheet.create({
    row: {
        padding: 20,
        flexDirection: 'row',
        justifyContent: 'space-between',
        alignItems: 'center',
    },
    icon: {
        flex: 0.2,
        position: 'absolute',
        left: 25,
        top: 25,
    },
    text: {
        fontSize: 18
    },
    inputBox: {
        flex: 1,
        paddingTop: 5,
        paddingBottom: 15,
        paddingLeft: 40,
        fontSize: 16
        // ,
        // underlineColorAndroid: styles.main
    },

});