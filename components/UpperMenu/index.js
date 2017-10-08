import React, { PureComponent } from 'react';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import Icon from 'react-native-vector-icons/MaterialIcons';

import { Link } from 'react-router-native';
import {
    Text,
    View,
    AppRegistry, StyleSheet,
    TouchableWithoutFeedback
} from 'react-native';

import styles from './style';

import { resetTemporaryState } from "../../actions/app";

class UpperMenu extends PureComponent {
    render() {
        const { resetTemporaryState, app } = this.props;
        const { selectedCategory,
            selectedProductType,
            couponValue,
            nuovoComplete, selectedCoupon } = app;

        const IconArrow = (
            <Icon name="keyboard-arrow-left" style={styles.iconArrowBack} size={30} color={'#fff'} />
        );

        return (
            <View style={styles.nav}>
                {selectedCategory || selectedProductType ||
                    couponValue || nuovoComplete || (typeof selectedCoupon === 'number') ?
                    <TouchableWithoutFeedback onPress={() => resetTemporaryState()}>
                        {IconArrow}
                    </TouchableWithoutFeedback>
                    : null}
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
