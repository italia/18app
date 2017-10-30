import React, {Component} from 'react';
import {View, Text, StyleSheet, Image, TouchableOpacity} from 'react-native';
import {connect} from 'react-redux';
import {NavigationActions} from 'react-navigation';
import * as Constants from '../common/constants';

class Drawer extends Component {
    render() {
        return (
            <View style={{flex: 1}}>
                <View style={styles.headerContainer}>
                    <View style={styles.heading}>
                        <Text style={styles.userText}>
                            {this.props.user.name} {this.props.user.surname}
                        </Text>

                        <TouchableOpacity onPress={this.props.onClose}>
                            <Text style={styles.closeButton}>X</Text>
                        </TouchableOpacity>
                    </View>

                    <View style={styles.amountContainer}>
                        <Text style={styles.amountTitle}>Credito</Text>
                        <Text style={styles.amountValue}>
                            {this.props.user.credit.toFixed(2)}€
                        </Text>
                    </View>
                </View>
                <View style={styles.nav}>
                    <NavItem
                        onPress={() => this.props.goTo('profile')}
                        icon={require('../res/spid-ico-circle-bb.png')}
                        text="Profilo"
                    />
                    <NavItem
                        onPress={() => this.props.goTo('notifications')}
                        icon={require('../res/icon-notifiche.png')}
                        text="Notifiche"
                        badge={2}
                    />
                    <NavItem
                        onPress={() => this.props.goTo('logout')}
                        icon={require('../res/icon-logout.png')}
                        text="Logout"
                    />
                </View>
            </View>
        );
    }
}

const NavItem = props => {
    let badge;

    if (props.badge) {
        badge = (
            <View style={styles.badgeContainer}>
                <Text style={styles.badgeText}>{props.badge}</Text>
            </View>
        );
    }

    return (
        <TouchableOpacity onPress={props.onPress}>
            <View style={styles.navItem}>
                <View style={styles.iconContainer}>
                    <Image source={props.icon} style={styles.icon} />
                </View>
                <Text style={styles.navItemLabel}>{props.text}</Text>

                {badge}
            </View>
        </TouchableOpacity>
    );
};

const mapStateToProps = state => ({
    user: state.user,
});

const mapDispatchToProps = dispatch => ({
    onClose: () =>
        dispatch(NavigationActions.navigate({routeName: 'DrawerClose'})),
    goTo: screen =>
        dispatch(
            NavigationActions.navigate({
                routeName: screen,
            }),
        ),
});

export default connect(mapStateToProps, mapDispatchToProps)(Drawer);

const styles = StyleSheet.create({
    headerContainer: {
        padding: 16,
    },
    heading: {
        flexDirection: 'row',
        justifyContent: 'space-between',
        alignItems: 'center',
    },

    closeButton: {
        fontSize: 24,
        color: Constants.PRIMARY_BLUE,
    },
    userText: {
        fontSize: 24,
        fontFamily: Constants.TITILLIUM_REGULAR,
        color: Constants.GREY,
    },
    nav: {
        flex: 1,
        backgroundColor: Constants.SECONDARY_BLUE,
    },
    amountContainer: {
        marginTop: 15,
    },
    amountTitle: {
        fontSize: 14,
        fontFamily: Constants.TITILLIUM_REGULAR,
        color: Constants.GREY,
    },
    amountValue: {
        fontSize: 20,
        fontFamily: Constants.TITILLIUM_BOLD,
        color: Constants.GREY,
    },
    navItem: {
        height: 48,
        flexDirection: 'row',
        alignItems: 'center',
        borderBottomWidth: 1,
        borderBottomColor: '#000',
    },
    iconContainer: {
        width: 48,
        justifyContent: 'center',
        alignItems: 'center',
    },
    icon: {
        height: 24,
        resizeMode: 'contain',
        tintColor: Constants.WHITE,
    },
    navItemLabel: {
        fontSize: 16,
        fontFamily: Constants.TITILLIUM_REGULAR,
        color: Constants.WHITE,
        flex: 1,
    },
    badgeContainer: {
        backgroundColor: Constants.WHITE,
        height: 20,
        width: 20,
        borderRadius: 10,
        justifyContent: 'center',
        alignItems: 'center',
        marginHorizontal: 12,
    },
    badgeText: {
        fontSize: 14,
        color: Constants.SECONDARY_BLUE,
        fontFamily: Constants.TITILLIUM_BOLD,
        backgroundColor: 'transparent',
    },
});
