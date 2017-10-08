import React, { PureComponent } from 'react';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';
import {
    View, StyleSheet, Text, ScrollView, Animated, Button,
    Image, TouchableOpacity
} from 'react-native';
import Icon from 'react-native-vector-icons/MaterialIcons';

import CouponRow from "./CouponRow";
import colors from '../../style/colors';


class CouponDetails extends PureComponent {
    render() {
        const { app, couponId } = this.props;

        let selectedCoupon;
        if (app.nuovoComplete) {
            selectedCoupon = app.coupons.pop();
        } else {
            selectedCoupon = app.coupons[couponId];
        }

        const { selectedCategory,
            selectedProductType,
            couponValue,
            spent } = selectedCoupon;

        const IconCategory = (
            <Icon name="local-movies" size={30} color={'#333'} />
        );


        return (
            <View style={styles.container}>
                {app.nuovoComplete || spent ?
                    <View style={[styles.row, {
                        borderBottomWidth: 1,
                        borderColor: '#ddd',
                        flexDirection: 'row',
                        justifyContent: 'center',
                        alignItems: 'center',
                    }]}>
                        <Text style={!spent ? styles.messageSuccess : styles.messageError}>
                            {spent ? 'Buono utilizzato il 12 marzo 2017 alle ore 23.12' :
                                'Il nuovo buono è stato creato correttamente'}
                        </Text>
                    </View> : null}

                {/* Category */}
                <View style={styles.row}>
                    <View style={{ alignSelf: 'flex-start', flex: 0.8, flexDirection: 'row' }}>
                        {IconCategory}
                    </View>
                    <View style={{
                        flex: 2,
                    }}>
                        <Text style={[styles.text, { color: '#333' }]}>
                            {selectedCategory}
                        </Text>
                    </View>
                    <View style={{ alignSelf: 'flex-end', flex: 0.8, flexDirection: 'row' }}>
                        <Text style={[styles.text,
                        { color: '#A9B1B8', fontSize: 14, paddingBottom: 6 }]}>
                            Categoria
                        </Text>
                    </View>
                </View>
                {/* Product */}
                <View style={styles.row}>
                    <View style={{ alignSelf: 'flex-start', flex: 0.8, flexDirection: 'row' }}>
                        {IconCategory}
                    </View>
                    <View style={{
                        flex: 2,
                    }}>
                        <Text style={[styles.text, { color: '#333' }]}>
                            {selectedProductType}
                        </Text>
                    </View>
                    <View style={{ alignSelf: 'flex-end', flex: 0.8, flexDirection: 'row' }}>
                        <Text style={[styles.text,
                        { color: '#A9B1B8', fontSize: 14, paddingBottom: 6 }]}>
                            Prodotto
                        </Text>
                    </View>
                </View>
                {/* Value */}
                <View style={styles.row}>
                    <View style={{ alignSelf: 'flex-start', flex: 0.8, flexDirection: 'row' }}>
                        {IconCategory}
                    </View>
                    <View style={{
                        flex: 2,
                    }}>
                        <Text style={[styles.text,
                            {
                                color: '#333', fontSize: 24, fontWeight: 'bold',
                                textDecorationLine: spent ? 'line-through' : 'none'
                            }]}>
                            {couponValue}
                        </Text>
                    </View>
                    <View style={{ alignSelf: 'flex-end', flex: 0.8, flexDirection: 'row' }}>
                        <Text style={[styles.text,
                        { color: '#A9B1B8', fontSize: 14, paddingBottom: 6 }]}>
                            Valore
                        </Text>
                    </View>
                </View >
                {/* Codice */}
                <View style={styles.row}>
                    <View style={{ alignSelf: 'flex-start', flex: 0.8, flexDirection: 'row' }}>
                        {IconCategory}
                    </View>
                    <View style={{
                        flex: 2,
                    }}>
                        <Text style={[styles.text, { color: '#333', fontSize: 24, fontWeight: 'bold' }]}>
                            45DH6789
                        </Text>
                    </View>
                    <View style={{ alignSelf: 'flex-end', flex: 0.8, flexDirection: 'row' }}>
                        <Text style={[styles.text,
                        { color: '#A9B1B8', fontSize: 14, paddingBottom: 6 }]}>
                            Codice
                        </Text>
                    </View>
                </View>
                {/* Codice */}
                <View style={styles.row}>
                    <TouchableOpacity onPress={() => { }} style={styles.btnNegozio}>
                        <Image
                            style={styles.navIcon}
                            source={require('../../assets/icons/icon-marker-white-medium.png')}
                        />
                        <Text style={{
                            color: '#fff',
                            width: 200,
                            alignItems: 'center',
                            fontWeight: 'bold',
                            fontSize: 18
                        }}>
                            DETTAGLI DEL NEGOZIO
                        </Text>
                    </TouchableOpacity>
                </View>

            </View >
        );
    }
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
    },
    row: {
        flexDirection: 'row',
        justifyContent: 'space-between',
        alignItems: 'center',
        padding: 10,
        paddingLeft: 20,
        paddingRight: 20,
    },
    text: {
        fontSize: 18
    },
    messageSuccess: {
        color: colors.success,
        padding: 10
    },
    messageError: {
        color: '#D0021B',
        padding: 10
    },
    btnNegozio: {
        backgroundColor: colors.main,
        flex: 1,
        flexDirection: 'row',
        alignItems: 'center',
        padding: 10,
        justifyContent: 'center'
    },
    navIcon: {
        marginBottom: 5,
        marginRight: 15
    }
});

const mapStateToProps = (state) => {
    const { app } = state;
    return {
        app
    };
};

function mapDispatchToProps(dispatch) {
    return bindActionCreators({
    }, dispatch);
}

export default connect(mapStateToProps, mapDispatchToProps)(CouponDetails);
