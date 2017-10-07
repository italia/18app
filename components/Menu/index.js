import React from 'react';

import { Link } from 'react-router-native';
import {
    Text,
    View,
    AppRegistry,
    Image
} from 'react-native';

import styles from './style';

import BottomNavigation, { Tab } from 'react-native-material-bottom-navigation'


const Menu = () => (
    <View style={styles.nav}>
        <Link
            to="/"
            underlayColor='transparent'
            style={styles.navItem}>
            <View>
                <Image
                    source={require('../../assets/icons/icon-plus-white.png')}
                />
                <Text style={styles.navElement}>Nuovo</Text>
            </View>
        </Link>
        <Link
            to="/about"
            underlayColor='transparent'
            style={styles.navItem}>
            <View>
                <Image
                    source={require('../../assets/icons/icon-plus-white.png')}
                />
                <Text style={styles.navElement}>I tuoi buoni</Text>
            </View>
        </Link>
        <Link
            to="/topics"
            underlayColor='transparent'
            style={styles.navItem} >
            <View>
                <Image
                    source={require('../../assets/icons/icon-plus-white.png')}
                />
                <Text style={styles.navElement}>Negozi</Text>
            </View>

        </Link>
        <Link
            to="/about"
            underlayColor='transparent'
            style={styles.navItem} >
            <View>
                <Image
                    source={require('../../assets/icons/icon-plus-white.png')}
                />
                <Text style={styles.navElement}>Info</Text>
            </View>

        </Link>
    </View>
);





export default Menu;
