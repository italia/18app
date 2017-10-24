import React, { PureComponent } from 'react';
import { View, Text, Image, TouchableOpacity, StyleSheet } from 'react-native';
import PropTypes from 'prop-types';
import * as Constants from '../common/constants';

export default class HeaderProfileButton extends PureComponent {
    render() {
        return (
            <TouchableOpacity onPress={this.props.onPress}>
                <View style={styles.container}>
                    <View style={styles.textContainer}>
                        <Text style={styles.credit}>Credito</Text>
                        <Text style={styles.creditAmount}>174,00€</Text>
                    </View>

                    <View style={styles.notificationContainer}>
                        <Image source={require('../res/spid-ico-circle-bb.png')} style={styles.icon} />
                        <View style={styles.notificationCounter}>
                            <Text style={styles.notificationCounterText}>2</Text>
                        </View>
                    </View>
                </View>
            </TouchableOpacity>
        );
    }
}

const styles = StyleSheet.create({
    container: {
        flexDirection: 'row',
    },
    textContainer: {
        alignItems: 'flex-end',
    },
    credit: {
        fontSize: 13,
        color: Constants.WHITE,
        fontFamily: Constants.TITILLIUM_REGULAR,
    },
    creditAmount: {
        fontSize: 13,
        color: Constants.WHITE,
        fontFamily: Constants.TITILLIUM_BOLD,
    },
    notificationContainer: {
        justifyContent: 'center',
        marginHorizontal: 12,
    },
    icon: {
        width: 24,
        height: 24,
        tintColor: Constants.WHITE
    },
    notificationCounter: {
        width: 10,
        height: 10,
        borderRadius: 5,
        backgroundColor: Constants.WHITE,
        justifyContent: 'center',
        alignItems: 'center',
        position: 'absolute',
        bottom: 3,
        right: 1,
        borderWidth: 1,
        borderColor: Constants.PRIMARY_BLUE,
    },
    notificationCounterText: {
        backgroundColor: 'transparent',
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 9,
        color: Constants.PRIMARY_BLUE
    }
});