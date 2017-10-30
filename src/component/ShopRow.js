import React, {Component} from 'react';
import {View, StyleSheet, Text, Image, TouchableOpacity} from 'react-native';
import * as Constants from '../common/constants';

export default class ShopRow extends Component {
    render() {
        return (
            <TouchableOpacity style={styles.container}>
                <View style={styles.content}>
                    <Text style={styles.title}>{this.props.shop.title}</Text>
                    {this.props.shop.link && (
                        <Text style={styles.link}>{this.props.shop.link}</Text>
                    )}
                    <Text style={styles.category}>
                        {this.props.shop.categories}
                    </Text>
                </View>
                <View style={styles.forward}>
                    {this.props.shop.distance && (
                        <Text style={styles.distance}>
                            {this.props.shop.distance >= 1000
                                ? `${(this.props.shop.distance / 1000).toFixed(
                                      1,
                                  )}km`
                                : `${this.props.shop.distance}m`}
                        </Text>
                    )}
                    <Image
                        style={styles.icon}
                        source={require('../res/back-button.png')}
                    />
                </View>
            </TouchableOpacity>
        );
    }
}
const styles = StyleSheet.create({
    container: {
        flexDirection: 'row',
        alignItems: 'center',
        padding: 15,
        justifyContent: 'space-between',
        borderBottomWidth: StyleSheet.hairlineWidth,
        borderColor: Constants.SECONDARY_GREY,
    },
    forward: {
        flexDirection: 'row',
        alignItems: 'center',
    },
    distance: {
        padding: 10,
        color: Constants.PRIMARY_GREY,
        fontFamily: Constants.TITILLIUM_REGULAR,
    },
    title: {
        fontFamily: Constants.TITILLIUM_BOLD,
        color: Constants.PRIMARY_BLUE,
        fontSize: 16,
    },
    category: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        color: Constants.LIGHTNING_BLUE,
        fontSize: 14,
    },
    link: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 14,
        color: Constants.PRIMARY_GREY,
    },
    icon: {
        tintColor: Constants.PRIMARY_BLUE,
        transform: [{rotate: '180deg'}],
        width: 8,
        height: 13,
    },
});
