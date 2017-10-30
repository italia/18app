import React, {Component} from 'react';
import {View, ScrollView, Text, Image, StyleSheet} from 'react-native';

import {connect} from 'react-redux';
import * as Constants from '../common/constants';

class Profile extends Component {
    static navigationOptions = {
        title: 'Il tuo profilo',
    };

    render() {
        return (
            <ScrollView style={{flex: 1, paddingTop: 30}}>
                <View style={styles.viewContainer}>
                    <Text style={styles.textTop}>
                        {this.props.user.name} {this.props.user.surname}
                    </Text>
                </View>
                <View style={styles.viewContainer}>
                    <Text style={styles.text}>Codice fiscale</Text>
                    <Text style={styles.textInfo}>
                        {this.props.user.fiscalCode}
                    </Text>
                </View>
                <View style={styles.viewContainer}>
                    <Text style={styles.text}>Data e luogo di nascita</Text>
                    <Text style={styles.textInfo}>
                        {this.props.user.birthDay}
                    </Text>
                    <Text style={styles.textInfo}>
                        {this.props.user.birthPlace}
                    </Text>
                </View>
                <View style={styles.viewContainer}>
                    <Text style={styles.text}>Residenza</Text>
                    <Text style={styles.textInfo}>
                        {this.props.user.address}
                    </Text>
                    <Text style={styles.textInfo}>
                        {this.props.user.postalCode} {this.props.user.city}{' '}
                        {this.props.user.province}
                    </Text>
                </View>
                <View style={styles.viewContainer}>
                    <Text style={styles.text}>Recapiti</Text>
                    <Text style={styles.textInfo}>
                        {this.props.user.mobile}
                    </Text>
                    <Text style={styles.textInfo}>{this.props.user.email}</Text>
                </View>
                <View style={styles.viewContainer}>
                    <Text style={styles.textBottom}>
                        Questo &egrave; il riepilogo dei dati della tua
                        identit&agrave; SPID: per modificarli rivolgiti al tuo
                        gestore.
                    </Text>
                </View>
                <View style={styles.viewContainer}>
                    <Image
                        style={styles.icon}
                        source={require('../res/logo-poste.png')}
                    />
                </View>
            </ScrollView>
        );
    }
}

const styles = StyleSheet.create({
    viewContainer: {
        paddingHorizontal: 20,
        paddingBottom: 14,
    },
    textTop: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 24,
        color: Constants.DARK_GREY,
    },
    text: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 12,
        color: Constants.SECONDARY_GREY,
    },
    textInfo: {
        color: Constants.DARK_GREY,
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 16,
    },
    textBottom: {
        color: Constants.SECONDARY_GREY,
        fontFamily: Constants.TITILLIUM_REGULAR,
        fontSize: 14,
    },
    icon: {
        height: 37,
        width: 132,
    },
});

const mapStateToProps = (state, props) => ({
    user: state.user,
});

export default connect(mapStateToProps)(Profile);
