import React, {Component} from 'react';
import {Text, View, Image, TouchableOpacity, StyleSheet} from 'react-native';
import PropTypes from 'prop-types';
import * as Constants from '../common/constants';

export default class Button extends Component {
    static propTypes = {
        icon: PropTypes.number,
        text: PropTypes.string,
        style: View.propTypes.style,
        onPress: PropTypes.func,
    };

    render() {
        return (
            <TouchableOpacity onPress={this.props.onPress}>
                <View style={[styles.button, this.props.style]}>
                    {this.props.icon && (
                        <Image style={styles.icon} source={this.props.icon} />
                    )}
                    <Text style={styles.text}>{this.props.text}</Text>
                </View>
            </TouchableOpacity>
        );
    }
}

const styles = StyleSheet.create({
    button: {
        borderRadius: 3,
        flexDirection: 'row',
        alignItems: 'center',
        justifyContent: 'center',
        paddingVertical: 10,
        paddingHorizontal: 15,
        backgroundColor: Constants.PRIMARY_BLUE,
    },
    icon: {
        marginRight: 13,
        tintColor: Constants.WHITE,
        height: 21,
        resizeMode: 'contain',
    },
    text: {
        fontFamily: Constants.TITILLIUM_BOLD,
        color: Constants.WHITE,
        fontSize: 16,
    },
});
