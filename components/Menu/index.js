import React, { PureComponent } from 'react';
import { Link } from 'react-router-native';
import { Text, View, AppRegistry, Image } from 'react-native';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import styles from './style';

import BottomNavigation, { Tab } from 'react-native-material-bottom-navigation';

class Menu extends PureComponent {
    render() {
        const { app } = this.props;
        return (
            <View style={styles.nav}>
                <Link
                    to="/"
                    underlayColor='transparent'
                    style={styles.navItem}>
                    <View style={{
                        justifyContent: 'center',
                        alignItems: 'center',
                    }}>
                        <Image
                            style={[styles.navIcon, { opacity: app.currentRoute === '/' ? 1 : 0.6 }]}
                            source={require('../../assets/icons/icon-plus-white-medium.png')}
                        />
                        <Text style={[styles.navElement, { opacity: app.currentRoute === '/' ? 1 : 0.6 }]}>Nuovo</Text>
                    </View>
                </Link>
                <Link
                    to="/buoni"
                    underlayColor='transparent'
                    style={styles.navItem}>
                    <View style={{
                        justifyContent: 'center',
                        alignItems: 'center',
                    }}>
                        <Image
                            style={[styles.navIcon, { opacity: app.currentRoute === '/buoni' ? 1 : 0.6 }]}
                            source={require('../../assets/icons/icon-wallet-white-medium.png')}
                        />
                        <Text style={[styles.navElement, { opacity: app.currentRoute === '/buoni' ? 1 : 0.6 }]}>I tuoi buoni</Text>
                    </View>
                </Link>
                <Link
                    to="/negozi"
                    underlayColor='transparent'
                    style={styles.navItem} >
                    <View style={{
                        justifyContent: 'center',
                        alignItems: 'center',
                    }}>
                        <Image
                            style={[styles.navIcon, { opacity: app.currentRoute === '/negozi' ? 1 : 0.6 }]}
                            source={require('../../assets/icons/icon-marker-white-medium.png')}
                        />
                        <Text style={[styles.navElement, { opacity: app.currentRoute === '/negozi' ? 1 : 0.6 }]}>Negozi</Text>
                    </View>

                </Link>
                <Link
                    to="/info"
                    underlayColor='transparent'
                    style={styles.navItem} >
                    <View style={{
                        justifyContent: 'center',
                        alignItems: 'center',
                    }}>
                        <Image
                            style={[styles.navIcon, { opacity: app.currentRoute === '/info' ? 1 : 0.6 }]}
                            source={require('../../assets/icons/icon-info-white-medium.png')}
                        />
                        <Text style={[styles.navElement, { opacity: app.currentRoute === '/info' ? 1 : 0.6 }]}>
                            Info
                        </Text>
                    </View>
                </Link>
            </View>
        );
    }
}


const mapStateToProps = (state) => {
    const { app } = state;
    return {
        app
    };
};

function mapDispatchToProps(dispatch) {
    return bindActionCreators({
        // resetTemporaryState,
        // changeCurrentRoute
    }, dispatch);
}

export default connect(mapStateToProps, mapDispatchToProps)(Menu);
