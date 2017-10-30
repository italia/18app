import React, {Component} from 'react';
import {Text, View, StyleSheet} from 'react-native';
import PropTypes from 'prop-types';
import * as Constants from '../common/constants';

export default class CouponHeader extends Component {
    static propTypes = {
        coupons: PropTypes.array.isRequired,
    };

    render() {
        const couponsUnused = this.props.coupons.filter(coupon => !coupon.used)
            .length;

        return (
            <View style={styles.headerContainer}>
                <Text style={styles.text}>
                    {couponsUnused === 1 ? "C'è " : 'Ci sono '}
                    <Text style={styles.textBold}>
                        {couponsUnused === 1
                            ? '1 buono '
                            : couponsUnused + ' buoni '}
                    </Text>
                    ancora da spendere
                </Text>
            </View>
        );
    }
}

const styles = StyleSheet.create({
    headerContainer: {
        flexDirection: 'row',
        alignItems: 'center',
        paddingBottom: 10,
        paddingTop: 10,
        paddingLeft: 24,
    },
    text: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        color: Constants.SECONDARY_GREY,
        fontSize: 14,
    },
    textBold: {
        fontFamily: Constants.TITILLIUM_BOLD,
        color: Constants.SECONDARY_GREY,
        fontSize: 14,
    },
});
