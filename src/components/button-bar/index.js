import React, { Component } from 'react';
import {
    Platform,
    StyleSheet,
    Text,
    View,
    Image
} from 'react-native'
import Button from '../button'


class ButtonBar extends Component {
    render() {
        return (
            <View style={{ position: 'absolute', bottom: 0, left: 0, right: 0, flex: 0 }}>
                <Button
                    left
                    icon={require('../../assets/loghettoLogin.png')}
                    style={{ height: 64 }}
                    stat="white"
                    bcolor
                    full
                    size='small'
                    title="ENTRA CON SPID"
                    bold
                    onPress={this.props.onPress} />
            </View>
        );
    }
}

export default ButtonBar;