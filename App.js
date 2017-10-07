import React from 'react';
import {
    StyleSheet,
    Text,
    View,
    ScrollView,
    AppRegistry,
} from 'react-native';

import { NativeRouter, Route, Link } from 'react-router-native';

import Menu from './components/Menu';
import UpperMenu from './components/UpperMenu';

import Nuovo from './components/Nuovo';
import Negozi from './components/Negozi';
import Buoni from './components/Buoni';
import Info from './components/Info';

import { createStore } from 'redux';
import { Provider } from 'react-redux';
import rootReducer from './reducers/rootReducer';

export const store = createStore(rootReducer);

export default class AppScreen extends React.Component {
    render() {
        return (
            <Provider store={store}>
                <NativeRouter>
                    <View style={styles.container}>
                        <UpperMenu />
                        <Route exact path="/" component={Nuovo} />
                        <Route path="/negozi" component={Negozi} />
                        <Route path="/buoni" component={Buoni} />
                        <Route path="/info" component={Info} />
                        <Menu />
                    </View>
                </NativeRouter>
            </Provider>
        )
    }
}

const styles = StyleSheet.create({
    container: {
        marginTop: 25,
        justifyContent: 'space-between',
        flex: 1
    },
    header: {
        fontSize: 20,
    },
    topic: {
        textAlign: 'center',
        fontSize: 15,
    }
});
