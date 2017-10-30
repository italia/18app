import React, {PureComponent} from 'react';
import {View, Text, Image, TouchableOpacity, StyleSheet} from 'react-native';
import PropTypes from 'prop-types';
import {connect} from 'react-redux';
import {NavigationActions} from 'react-navigation';
import * as Constants from '../common/constants';

class HeaderProfileButton extends PureComponent {
    render() {
        return (
            <TouchableOpacity onPress={this.props.onPress}>
                <View style={styles.container}>
                    <View style={styles.textContainer}>
                        <Text style={styles.credit}>Credito</Text>
                        <Text style={styles.creditAmount}>
                            {this.props.credit.toFixed(2)}€
                        </Text>
                    </View>

                    <View style={styles.notificationContainer}>
                        <Image
                            source={require('../res/spid-ico-circle-bb.png')}
                            style={styles.icon}
                        />
                        <View style={styles.notificationCounter}>
                            <Text style={styles.notificationCounterText}>
                                2
                            </Text>
                        </View>
                    </View>
                </View>
            </TouchableOpacity>
        );
    }
}

const mapStateToProps = state => ({
    credit: state.user.credit,
});

const mapDispatchToProps = dispatch => ({
    onPress: () =>
        dispatch(
            NavigationActions.navigate({
                routeName: 'DrawerToggle',
            }),
        ),
});

export default connect(mapStateToProps, mapDispatchToProps)(
    HeaderProfileButton,
);

const styles = StyleSheet.create({
    container: {
        flexDirection: 'row',
    },
    textContainer: {
        alignItems: 'flex-end',
    },
    credit: {
        fontSize: 13,
        lineHeight: 15,
        color: Constants.WHITE,
        fontFamily: Constants.TITILLIUM_REGULAR,
    },
    creditAmount: {
        fontSize: 13,
        lineHeight: 15,
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
        tintColor: Constants.WHITE,
    },
    notificationCounter: {
        width: 12,
        height: 12,
        borderRadius: 6,
        backgroundColor: Constants.WHITE,
        justifyContent: 'center',
        alignItems: 'center',
        position: 'absolute',
        bottom: 0,
        right: 0,
        borderWidth: 1,
        borderColor: Constants.PRIMARY_BLUE,
    },
    notificationCounterText: {
        backgroundColor: 'transparent',
        fontFamily: Constants.TITILLIUM_BOLD,
        fontSize: 8,
        color: Constants.PRIMARY_BLUE,
    },
});
