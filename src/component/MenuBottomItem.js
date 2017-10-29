import React, {PureComponent} from 'react';
import {View, Text, Image, TouchableOpacity, StyleSheet} from 'react-native';
import PropTypes from 'prop-types';
import * as Constant from '../common/constants';

export default class MenuBottomItem extends PureComponent {
    static propTypes = {
        active: PropTypes.bool,
        text: PropTypes.string.isRequired,
        icon: Image.propTypes.source,
        onPress: PropTypes.func,
    };

    render() {
        return (
            <TouchableOpacity onPress={this.props.onPress}>
                <View
                    style={[
                        styles.container,
                        this.props.active ? styles.activeContainer : null,
                    ]}>
                    <Image style={styles.image} source={this.props.icon} />
                    <Text style={styles.text}>{this.props.text}</Text>
                </View>
            </TouchableOpacity>
        );
    }
}

const styles = StyleSheet.create({
    container: {
        alignItems: 'center',
        opacity: 0.66,
    },
    activeContainer: {
        opacity: 1,
    },
    image: {
        height: 24,
        resizeMode: 'contain',
        tintColor: Constant.WHITE,
        marginBottom: 2,
    },
    text: {
        color: Constant.WHITE,
        fontSize: 11,
    },
});
