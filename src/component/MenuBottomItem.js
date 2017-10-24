import React, {PureComponent} from 'react';
import {View, Text, Image, TouchableOpacity, StyleSheet} from 'react-native';
import PropTypes from 'prop-types';
import * as Constant from '../common/constants';

export default class MenuBottomItem extends PureComponent {
    static propTypes = {
        active: PropTypes.bool,
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
                    <Image
                        style={styles.image}
                        source={require('../res/icon-plus-white.png')}
                    />

                    <Text style={styles.text}>Nuovo</Text>
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
        tintColor: Constant.WHITE,
    },
    text: {
        color: Constant.WHITE,
        fontSize: 11,
    },
});
