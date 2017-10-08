import React, { PureComponent } from 'react';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import Icon from 'react-native-vector-icons/MaterialIcons';

import { Link } from 'react-router-native';
import {
    Text,
    View,
    AppRegistry,
} from 'react-native';

import styles from './style';

import { resetTemporaryState } from "../../actions/app";


import BottomNavigation, { Tab } from 'react-native-material-bottom-navigation'

class UpperMenu extends PureComponent {
    render() {
        const IconArrow = (
            <Icon name="keyboard-arrow-left" size={30} color={'#fff'} />
        );
        return (
            <View style={styles.nav}>
                {IconArrow}
            </View>);
    }
};




const mapStateToProps = (state) => {
    const { app } = state;
    return {
        app
    };
};

function mapDispatchToProps(dispatch) {
    return bindActionCreators({
        resetTemporaryState
    }, dispatch);
}

export default connect(mapStateToProps, mapDispatchToProps)(UpperMenu);
