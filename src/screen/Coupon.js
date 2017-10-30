import React, {Component} from 'react';
import {View, ScrollView, Text, Image, StyleSheet} from 'react-native';
import {NavigationActions} from 'react-navigation';
import moment from 'moment';
import {connect} from 'react-redux';
import {cancelCoupon} from '../stores/coupons';
import Button from '../component/Button';
import * as Constants from '../common/constants';
import Categories from '../common/categories';

class Coupon extends Component {
    static navigationOptions = {
        title: 'Dettagli del buono',
    };

    _renderMerchant() {
        if (!this.props.coupon.used) {
            return null;
        }

        return (
            <View style={styles.headerContainer}>
                <Text style={styles.headerTitle}>
                    {this.props.coupon.merchant.name}
                </Text>
                <View style={styles.headerSubtitle}>
                    <Image
                        style={styles.headerIcon}
                        source={require('../res/icon-marker-white.png')}
                    />
                    <Text style={styles.headerText}>
                        {this.props.coupon.merchant.place}
                    </Text>
                </View>
            </View>
        );
    }

    _renderUsedTitle() {
        if (!this.props.coupon.used) {
            return null;
        }

        return (
            <Text style={styles.couponUsedText}>
                Buono utilizzato il{' '}
                {moment(this.props.coupon.used).format(
                    'DD MMMM Y [ alle ore ] HH:mm',
                )}
            </Text>
        );
    }

    _renderBottom() {
        if (this.props.coupon.used) {
            return (
                <View style={styles.buttonContainerWithLine}>
                    <Button
                        icon={require('../res/icon-marker-white.png')}
                        text="DETTAGLI DEL NEGOZIO"
                    />
                </View>
            );
        }

        return (
            //View per qrcode e barcode
            <View>
                <View style={styles.qrcode}>
                    <Text>Qui il QRcode</Text>
                </View>
                <View style={styles.buttonContainerWithLine}>
                    <Button
                        icon={require('../res/icon-marker-white.png')}
                        text="TROVA UN NEGOZIO"
                    />
                </View>
                <Text style={styles.disclaimer}>
                    Questo buono non &egrave; cedibile e appartiene a te.
                </Text>
                <View style={styles.rowContainerWithLine}>
                    <View style={styles.iconContainer}>
                        <Image
                            style={styles.icon}
                            source={require('../res/profile.png')}
                        />
                    </View>
                    <Text style={styles.disclaimerIdentity}>Mario Rossi</Text>
                    <Text style={styles.textLight}>Intestatario</Text>
                </View>
                <Text style={styles.disclaimer}>
                    Puoi annullare in ogni momento questo buono e riversare
                    l&rsquo;intero suo valore nel tuo credito
                </Text>
                <View style={styles.buttonContainer}>
                    <Button
                        icon={require('../res/icon-trash.png')}
                        text="ANNULLA QUESTO BUONO"
                        style={styles.buttonDelete}
                    />
                </View>
            </View>
        );
    }

    render() {
        return (
            <ScrollView style={{flex: 1}}>
                {this._renderMerchant()}
                <View style={{flex: 1}}>
                    {this._renderUsedTitle()}
                    <View style={styles.rowContainer}>
                        <View style={styles.iconContainer}>
                            <Image
                                style={styles.icon}
                                source={
                                    Categories[this.props.coupon.category].icon
                                }
                            />
                        </View>
                        <Text style={styles.categoryText}>
                            {this.props.coupon.category}
                        </Text>
                        <Text style={styles.textLight}>Categoria</Text>
                    </View>
                    <View style={styles.rowContainer}>
                        <View style={styles.iconContainer}>
                            <Image
                                style={styles.icon}
                                source={require('../res/icon-gift.png')}
                            />
                        </View>
                        <Text style={styles.productText}>
                            {this.props.coupon.description}
                        </Text>
                        <Text style={styles.textLight}>Prodotto</Text>
                    </View>
                    <View style={styles.rowContainer}>
                        <View style={styles.iconContainer}>
                            <Image
                                style={styles.icon}
                                source={require('../res/icon-euro.png')}
                            />
                        </View>
                        <Text
                            style={[
                                styles.valueText,
                                this.props.coupon.used ? styles.usedText : null,
                            ]}>
                            {this.props.coupon.price.toFixed(2)}
                        </Text>
                        <Text style={styles.textLight}>Valore</Text>
                    </View>
                    <View style={styles.rowContainer}>
                        <View style={styles.iconContainer}>
                            <Image
                                style={styles.icon}
                                source={require('../res/icon-qrcode.png')}
                            />
                        </View>
                        <Text style={styles.codeText}>
                            {this.props.coupon.code}
                        </Text>
                        <Text style={styles.textLight}>Codice</Text>
                    </View>
                </View>
                {this._renderBottom()}
            </ScrollView>
        );
    }
}

const mapStateToProps = (state, props) => ({
    coupon: state.coupons.items.filter(
        coupon => coupon.code === props.navigation.state.params.couponCode,
    )[0],
});

const mapDispatchToProps = dispatch => ({
    deleteCoupon: coupon => {
        dispatch(NavigationActions.back());
        setTimeout(() => dispatch(cancelCoupon(coupon)), 1000);
    },
});

export default connect(mapStateToProps, mapDispatchToProps)(Coupon);

const styles = StyleSheet.create({
    headerContainer: {
        backgroundColor: '#003E90',
        paddingLeft: 24,
        paddingVertical: 20,
    },
    headerTitle: {
        fontFamily: Constants.TITILLIUM_BOLD,
        fontSize: 32,
        color: Constants.WHITE,
        lineHeight: 32,
        marginBottom: 10,
    },
    headerIcon: {
        tintColor: Constants.WHITE,
        height: 21,
        width: 16,
    },
    headerText: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 14,
        fontStyle: 'italic',
        color: Constants.WHITE,
        paddingLeft: 14,
    },
    headerSubtitle: {
        flexDirection: 'row',
        alignItems: 'center',
    },
    couponUsedText: {
        color: Constants.RED,
        fontFamily: Constants.TITILLIUM_BOLD,
        fontSize: 14,
        textAlign: 'center',
        paddingVertical: 10,
        borderBottomWidth: 1,
        borderBottomColor: Constants.LINE_GREY,
    },
    rowContainer: {
        flexDirection: 'row',
        alignItems: 'center',
        paddingBottom: 10,
        paddingTop: 10,
    },
    rowContainerWithLine: {
        flexDirection: 'row',
        alignItems: 'center',
        paddingBottom: 10,
        paddingTop: 10,
        borderBottomWidth: 1,
        borderBottomColor: Constants.LINE_GREY,
    },
    qrcode: {
        paddingBottom: 10,
        borderBottomWidth: 1,
        borderBottomColor: Constants.LINE_GREY,
    },
    iconContainer: {
        alignItems: 'center',
        paddingLeft: 24,
        paddingRight: 24,
    },
    icon: {
        height: 24,
        width: 24,
        tintColor: Constants.ICON_GREY,
    },
    categoryText: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 16,
        flex: 1,
        color: Constants.ICON_GREY,
    },
    productText: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 16,
        flex: 1,
        color: Constants.ICON_GREY,
    },
    valueText: {
        fontFamily: Constants.TITILLIUM_BOLD,
        fontSize: 24,
        flex: 1,
        color: Constants.ICON_GREY,
    },
    usedText: {
        textDecorationLine: 'line-through',
    },
    codeText: {
        fontFamily: Constants.TITILLIUM_BOLD,
        fontSize: 24,
        flex: 1,
        color: Constants.ICON_GREY,
    },
    textLight: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 12,
        color: Constants.LIGHT_GREY,
        paddingRight: 21,
    },
    buttonContainer: {
        paddingHorizontal: 20,
        paddingVertical: 17,
    },
    buttonContainerWithLine: {
        paddingHorizontal: 20,
        paddingVertical: 17,
        borderBottomWidth: 1,
        borderBottomColor: Constants.LINE_GREY,
    },
    buttonDelete: {
        backgroundColor: Constants.RED,
    },
    disclaimer: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 14,
        color: Constants.LIGHT_GREY,
        paddingLeft: 24,
        paddingRight: 21,
        paddingTop: 10,
    },
    disclaimerIdentity: {
        color: Constants.ICON_GREY,
        fontFamily: Constants.TITILLIUM_BOLD,
        fontSize: 16,
        flex: 1,
    },
});
