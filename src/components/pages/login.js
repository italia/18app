import React, { Component } from 'react';
import { AppRegistry, View} from 'react-native'

import Header from '@components/header'
import Main from '../main'
import Footer from '../footer'
import ButtonBar from '../button-bar'

class Login extends Component {
    render() {
        return (
            <View style={{flex: 1}}>
                <Header />
                <Main />
                <ButtonBar onPress={() => this.props.navigation.navigate('Main')}/>
            </View>
        );
    }
}

export default Login