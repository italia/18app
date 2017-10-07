import React from 'react';

import { Link } from 'react-router-native';
import {
    Text,
    View,
    AppRegistry,
} from 'react-native';

import styles from './style';

import BottomNavigation, { Tab } from 'react-native-material-bottom-navigation'


const UpperMenu = () => (
    <View style={styles.nav}>
        
        {/* <Link
            to="/"
            underlayColor='transparent'
            style={styles.navItem}>
            <Text style={styles.navElement}>Nuovo</Text>
        </Link>
        <Link
            to="/about"
            underlayColor='transparent'
            style={styles.navItem}>
            <Text style={styles.navElement}>I tuoi buoni</Text>
        </Link>
        <Link
            to="/topics"
            underlayColor='transparent'
            style={styles.navItem} >
            <Text style={styles.navElement}>Negozi</Text>
        </Link>
        <Link
            to="/about"
            underlayColor='transparent'
            style={styles.navItem} >
            <Text style={styles.navElement}>Info</Text>
        </Link> */}
    </View>
);



export default UpperMenu;
