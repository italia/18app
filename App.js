import React from 'react';
import {
    StyleSheet, Text, View,
    ScrollView, AppRegistry, Animated
} from 'react-native';

import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import { Router, Route, Link, Switch } from 'react-router-native';
import createMemoryHistory from 'history/createMemoryHistory';

import Menu from './components/Menu';
import UpperMenu from './components/UpperMenu';

import Nuovo from './components/Nuovo';
import Negozi from './components/Negozi';
import Buoni from './components/Buoni';
import Info from './components/Info';

import { createStore } from 'redux';
import { Provider } from 'react-redux';
import rootReducer from './reducers/rootReducer';

import { changeCurrentRoute, resetTemporaryState } from './actions/app';

export const store = createStore(rootReducer);
export const history = createMemoryHistory();

history.listen((e) => {
    store.dispatch(changeCurrentRoute(e.pathname));
});

export default class AppScreen extends React.Component {
    render() {
        return (
            <Provider store={store}>
                <Router history={history}>
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
                </Router>
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