import React, {Component} from 'react';
import {Text, View, Image, StyleSheet, TouchableOpacity} from 'react-native';
import PropTypes from 'prop-types';
import {connect} from 'react-redux';
import * as Constants from '../common/constants';
import {NavigationActions} from 'react-navigation';
import Categories from '../common/categories';

class CouponRow extends Component {
    static propTypes = {
        code: PropTypes.string.isRequired,
        category: PropTypes.string.isRequired,
        description: PropTypes.string.isRequired,
        merchant: PropTypes.shape({
            name: PropTypes.string.isRequired,
        }),
        used: PropTypes.instanceOf(Date),
        price: PropTypes.number.isRequired,
        onPress: PropTypes.func,
    };

    render() {
        let merchant = null;

        if (this.props.merchant) {
            merchant = (
                <Text
                    style={[
                        styles.merchant,
                        this.props.used ? styles.merchant : null,
                    ]}>
                    {this.props.merchant.name}
                </Text>
            );
        }

        return (
            <TouchableOpacity
                onPress={() => this.props.onPress(this.props.code)}>
                <View style={styles.rowContainer}>
                    <View style={styles.iconContainer}>
                        <Image
                            source={Categories[this.props.category].icon}
                            style={[
                                styles.icon,
                                this.props.used ? styles.iconUsed : null,
                            ]}
                        />
                    </View>
                    <View style={styles.titleContainer}>
                        <Text
                            style={[
                                styles.category,
                                this.props.used ? styles.usedText : null,
                            ]}>
                            {Categories[this.props.category].name}
                        </Text>
                        <Text
                            style={[
                                styles.description,
                                this.props.used ? styles.usedText : null,
                            ]}>
                            {this.props.description}
                        </Text>
                        {merchant}
                    </View>
                    <View>
                        <Text
                            style={[
                                styles.price,
                                this.props.used ? styles.usedPrice : null,
                            ]}>
                            {this.props.price.toFixed(2)}
                        </Text>
                    </View>
                    <View style={styles.arrowContainer}>
                        <Text
                            style={[
                                styles.arrow,
                                this.props.used ? styles.usedText : null,
                            ]}>
                            >
                        </Text>
                    </View>
                </View>
            </TouchableOpacity>
        );
    }
}

const mapStateToProps = state => ({});

const mapDispatchToProps = dispatch => ({
    onPress: code =>
        dispatch(
            NavigationActions.navigate({
                routeName: 'coupons/details',
                params: {
                    couponCode: code,
                },
            }),
        ),
});

export default connect(mapStateToProps, mapDispatchToProps)(CouponRow);

const styles = StyleSheet.create({
    icon: {
        width: 24,
        height: 24,
    },
    iconUsed: {
        width: 24,
        height: 24,
        tintColor: Constants.GREY,
    },
    usedText: {
        color: Constants.GREY,
    },
    usedPrice: {
        color: Constants.GREY,
        textDecorationLine: 'line-through',
    },
    rowContainer: {
        flexDirection: 'row',
        alignItems: 'center',
        paddingBottom: 10,
        paddingTop: 10,
        borderBottomWidth: 1,
        borderBottomColor: Constants.LINE_GREY,
    },
    iconContainer: {
        alignItems: 'center',
        paddingLeft: 24,
        paddingRight: 24,
    },
    titleContainer: {
        flex: 1,
    },
    category: {
        fontFamily: Constants.TITILLIUM_BOLD,
        color: Constants.PRIMARY_BLUE,
        fontSize: 16,
    },
    description: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        color: Constants.PRIMARY_BLUE,
        fontSize: 14,
    },
    merchant: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        color: Constants.SECONDARY_GREY,
        fontSize: 14,
    },
    arrowContainer: {
        alignItems: 'center',
    },
    price: {
        fontFamily: Constants.TITILLIUM_BOLD,
        color: Constants.PRIMARY_BLUE,
        paddingLeft: 24,
        alignItems: 'center',
        fontSize: 20,
        letterSpacing: -1,
    },
    arrow: {
        fontFamily: Constants.TITILLIUM_BOLD,
        color: Constants.PRIMARY_BLUE,
        paddingRight: 24,
        paddingLeft: 16,
        alignItems: 'center',
    },
});
