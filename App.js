import React from 'react';
import {
    StyleSheet,
    Text,
    View,
    ScrollView,
    AppRegistry,
    Animated
} from 'react-native';

import { NativeRouter, Route, Link, Switch } from 'react-router-native';

import Menu from './components/Menu';
import UpperMenu from './components/UpperMenu';

import Nuovo from './components/Nuovo';
import Negozi from './components/Negozi';
import Buoni from './components/Buoni';
import Info from './components/Info';

// import AnimatedChildRoute from './components/AnimatedChildRoute';

import { createStore } from 'redux';
import { Provider } from 'react-redux';
import rootReducer from './reducers/rootReducer';

export const store = createStore(rootReducer);

export default class AppScreen extends React.Component {
    state = {
        anim: new Animated.Value(
            this.props.isOpen ? 0 : 1
        )
    }

    render() {
        return (
            <Provider store={store}>
                <NativeRouter>
                    <View style={styles.container}>
                        <UpperMenu />
                        <Switch>
                                <Route exact path="/" component={Nuovo} />
                                <Route path="/negozi" component={Negozi} />
                                <Route path="/buoni" component={Buoni} />
                                <Route path="/info" component={Info} />
                        </Switch>
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
