import React, {Component} from 'react';
import {View, StyleSheet, Image, Text, TouchableOpacity} from 'react-native';
import Button from '../component/Button';
import {connect} from 'react-redux';
import * as Constants from '../common/constants';

class Shop extends Component {
    static navigationOptions = {
        title: 'Negozio',
    };

    renderBottomLinks() {
        const {state} = this.props.navigation;
        return (
            <View style={styles.linkContainer}>
                <TouchableOpacity style={styles.footerLink}>
                    <Image
                        style={{
                            width: 18,
                            height: 18,
                            margin: 10,
                        }}
                        source={require('../res/icon-map-06c.png')}
                    />
                    <Text style={styles.linkText}>
                        {state.params.shop.link
                            ? 'VAI AL SITO DEL NEGOZIO'
                            : 'MAPPA'}
                    </Text>
                </TouchableOpacity>
                {!state.params.shop.link && (
                    <TouchableOpacity style={styles.footerLink}>
                        <Image
                            style={{
                                width: 18,
                                height: 18,
                                margin: 10,
                            }}
                            source={require('../res/icon-map-06c.png')}
                        />
                        <Text style={styles.linkText}>PERCORSO</Text>
                    </TouchableOpacity>
                )}
            </View>
        );
    }

    render() {
        const {state} = this.props.navigation;
        return (
            <View style={styles.container}>
                <Image
                    style={styles.background}
                    source={require('../res/login/bg-libri.png')}>
                    <Text style={styles.shopCategory}>
                        {state.params.shop.categories}
                    </Text>
                    <View>
                        <Text style={styles.shopTitle}>
                            {state.params.shop.title}
                        </Text>
                        <View style={styles.shopPosition}>
                            <Image
                                style={styles.icon}
                                source={require('../res/icon-marker-white.png')}
                            />
                            <View style={{justifyContent: 'center'}}>
                                <Text style={styles.address}>
                                    {state.params.shop.link
                                        ? state.params.shop.link
                                        : state.params.shop.street}
                                </Text>
                                {!state.params.shop.link && (
                                    <Text style={styles.city}>
                                        {state.params.shop.city}
                                    </Text>
                                )}
                            </View>
                        </View>
                    </View>
                </Image>
                <View style={styles.content}>
                    <View style={{flex: 1}}>
                        <Button
                            text="NUOVO BUONO"
                            icon={require('../res/icon-plus-white.png')}
                        />
                        {this.renderBottomLinks()}
                    </View>
                </View>
            </View>
        );
    }
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        alignItems: 'center',
        justifyContent: 'flex-end',
    },
    content: {
        height: 120,
        backgroundColor: Constants.WHITE,
        alignItems: 'center',
        justifyContent: 'center',
        flexDirection: 'row',
        padding: 20,
    },
    background: {
        flex: 1,
        alignSelf: 'stretch',
        width: undefined,
        height: undefined,
        padding: 20,
        justifyContent: 'space-between',
    },
    shopPosition: {
        flexDirection: 'row',
    },
    shopTitle: {
        fontFamily: Constants.TITILLIUM_BOLD,
        fontSize: 32,
        color: Constants.WHITE,
        padding: 10,
    },
    shopCategory: {
        fontFamily: Constants.TITILLIUM_BOLD,
        fontSize: 14,
        color: Constants.WHITE,
    },
    icon: {
        width: 16,
        height: 21,
        margin: 10,
    },
    footerLink: {
        flex: 1,
        height: 40,
        backgroundColor: Constants.WHITE,
        alignItems: 'center',
        justifyContent: 'center',
        flexDirection: 'row',
    },
    linkText: {
        color: Constants.PRIMARY_BLUE,
        fontFamily: 'titillium-bold',
        fontSize: 16,
    },
    linkContainer: {
        flexDirection: 'row',
        justifyContent: 'center',
        alignItems: 'center',
        paddingTop: 10,
    },
    address: {
        fontSize: 14,
        fontFamily: Constants.TITILLIUM_ITALIC,
        color: Constants.WHITE,
    },
    city: {
        fontSize: 14,
        fontFamily: Constants.TITILLIUM_SEMIBOLD_ITALIC,
        color: Constants.WHITE,
    },
});

const mapDispatchToProps = dispatch => ({
    goTo: route =>
        dispatch(
            NavigationActions.navigate({
                routeName: route,
            }),
        ),
});

export default connect(null, mapDispatchToProps)(Shop);
