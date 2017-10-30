import React, {Component} from 'react';
import {View, TouchableOpacity, Text, StyleSheet} from 'react-native';
import {AnimatedCircularProgress} from 'react-native-circular-progress';
import {connect} from 'react-redux';
import {NavigationActions} from 'react-navigation';
import Button from '../component/Button';
import * as Constants from '../common/constants';

class Home extends Component {
    static navigationOptions = {
        title: 'Home',
    };
    render() {
        return (
            <View style={styles.container}>
                <View style={{alignItems: 'center'}}>
                    <Text style={styles.welcomeText}>
                        Benvenuto {this.props.user.name}, ti restano
                    </Text>
                    <Text style={styles.amountText}>
                        {this.props.user.credit}{' '}
                        <Text style={styles.currency}>€</Text>
                    </Text>
                </View>

                <TouchableOpacity style={styles.newCouponContainer}>
                    <AnimatedCircularProgress
                        size={100}
                        width={2}
                        fill={(500 - this.props.user.credit) / 5}
                        rotation={0}
                        tintColor={Constants.PRIMARY_BLUE}
                        backgroundColor={Constants.AQUAMARINE}>
                        {() => (
                            <View style={styles.newCouponCircle}>
                                <Text style={styles.newCouponCircleText}>
                                    +
                                </Text>
                            </View>
                        )}
                    </AnimatedCircularProgress>
                    <Text style={styles.newCouponText}>NUOVO BUONO</Text>
                </TouchableOpacity>

                <Button
                    onPress={() => this.props.goTo('shops')}
                    icon={require('../res/icon-marker-white.png')}
                    text="SONO GIÀ IN NEGOZIO"
                />
            </View>
        );
    }
}

const mapStateToProps = state => ({
    user: state.user,
});

const mapDispatchToProps = dispatch => ({
    goTo: route =>
        dispatch(
            NavigationActions.navigate({
                routeName: route,
            }),
        ),
});

export default connect(mapStateToProps, mapDispatchToProps)(Home);

const styles = StyleSheet.create({
    container: {
        flex: 1,
        paddingVertical: 23,
        paddingHorizontal: 30,
        alignItems: 'center',
        justifyContent: 'space-between',
    },

    welcomeText: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        color: 'grey',
        fontSize: 16,
    },

    amountText: {
        color: Constants.AQUAMARINE,
        fontFamily: Constants.TITILLIUM_BOLD,
        fontSize: 40,
        letterSpacing: -1,
    },
    currency: {
        fontSize: 30,
        fontFamily: Constants.TITILLIUM_REGULAR,
    },

    newCouponCircle: {
        position: 'absolute',
        top: 5,
        left: 5,
        width: 90,
        height: 90,
        borderRadius: 50,
        backgroundColor: Constants.PRIMARY_BLUE,
        justifyContent: 'center',
        alignItems: 'center',
    },

    newCouponCircleText: {
        fontSize: 70,
        lineHeight: 70,
        color: Constants.WHITE,
        backgroundColor: 'transparent',
    },

    newCouponText: {
        fontSize: 16,
        color: Constants.PRIMARY_BLUE,
        fontFamily: Constants.TITILLIUM_SEMIBOLD,
        marginTop: 10,
    },

    geolocationButton: {
        height: 48,
        backgroundColor: Constants.PRIMARY_BLUE,
        paddingVertical: 14,
        paddingHorizontal: 26,
        borderRadius: 3,
    },
    geolocationText: {
        color: Constants.WHITE,
        fontFamily: Constants.TITILLIUM_SEMIBOLD,
        fontSize: 16,
    },
});
