import React, {Component} from 'react';
import Expo from 'expo';
import {View, Text, Image, TouchableOpacity} from 'react-native';
import {Platform, StyleSheet, Dimensions} from 'react-native';
import * as Constants from '../common/constants';

export default class Login extends Component {
    render() {
        return (
            <View style={styles.container}>
                <View style={styles.header}>
                    <Text style={styles.loginText}>18app</Text>
                </View>
                <Image
                    source={require('../res/login/bg-cinema.png')}
                    style={styles.contentContainer}>
                    <View style={styles.textContainer}>
                        <Text style={[styles.textCommon, styles.text1]}>
                            Hai 18 anni?
                        </Text>
                        <Text style={[styles.textCommon]}>Per te</Text>
                        <Text style={[styles.textCommon, styles.text3]}>
                            500€
                        </Text>
                        <Text style={[styles.textCommon]}>da spendere in</Text>
                        <Text style={[styles.textCommon, styles.text4]}>
                            cinema
                        </Text>
                    </View>

                    <View style={styles.bottomButtons}>
                        <TouchableOpacity>
                            <Text
                                style={[
                                    styles.textCommon,
                                    styles.bottomButton,
                                ]}>
                                INFORMAZIONI
                            </Text>
                        </TouchableOpacity>
                        <TouchableOpacity>
                            <Text
                                style={[
                                    styles.textCommon,
                                    styles.bottomButton,
                                ]}>
                                NON HAI SPID?
                            </Text>
                        </TouchableOpacity>
                    </View>
                </Image>
                <TouchableOpacity onPress={this.props.onLogin}>
                    <View style={styles.login}>
                        <Text style={styles.loginText}>ENTRA CON SPID</Text>
                    </View>
                </TouchableOpacity>
            </View>
        );
    }
}

const styles = StyleSheet.create({
    container: {
        flexDirection: 'column',
        flex: 1,
    },
    header: {
        paddingTop: Expo.Constants.statusBarHeight,
        backgroundColor: Constants.PRIMARY_BLUE,
        justifyContent: 'center',
        alignItems: 'center',
        ...Platform.select({
            ios: {
                height: Expo.Constants.statusBarHeight + 48,
            },
            android: {
                height: Expo.Constants.statusBarHeight + 56,
            },
        }),
    },
    contentContainer: {
        flex: 1,
        width: Dimensions.get('screen').width,
        resizeMode: 'cover',
        alignItems: 'center',
    },
    textContainer: {
        flex: 1,
        paddingTop: 45,
    },

    textCommon: {
        fontSize: 16,
        lineHeight: 18,
        textAlign: 'center',
        backgroundColor: 'transparent',
        color: Constants.WHITE,
        fontFamily: Constants.TITILLIUM_REGULAR,
    },

    text1: {
        fontSize: 32,
        fontFamily: Constants.TITILLIUM_BOLD,
        lineHeight: 38,
    },
    text3: {
        fontSize: 32,
        fontFamily: Constants.TITILLIUM_BOLD,
        lineHeight: 38,
    },
    text4: {
        fontSize: 40,
        color: Constants.WHITE,
        fontStyle: 'italic',
        lineHeight: 45,
        marginTop: 40,
    },

    bottomButtons: {
        width: Dimensions.get('screen').width,
        flexDirection: 'row',
        justifyContent: 'space-around',
        marginBottom: 25,
    },

    bottomButton: {
        fontFamily: Constants.TITILLIUM_BOLD,
    },

    login: {
        height: 64,
        backgroundColor: Constants.PRIMARY_BLUE,
        justifyContent: 'center',
        alignItems: 'center',
    },
    loginText: {
        fontFamily: Constants.TITILLIUM_SEMIBOLD,
        fontSize: 16,
        color: Constants.WHITE,
    },
});
