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

const About = () => (
    <Text style={styles.header}>
        About
    </Text>
)

const Topic = ({ match }) => (
    <Text style={styles.topic}>
        {match.params.topicId}
    </Text>
)

const Topics = ({ match }) => (
    <View>
        <Text style={styles.header}>Topics</Text>
        <View>
            <Link
                to={`${match.url}/rendering`}
                style={styles.subNavItem}
                underlayColor='#f0f4f7'>
                <Text>Rendering with React</Text>
            </Link>
            <Link
                to={`${match.url}/components`}
                style={styles.subNavItem}
                underlayColor='#f0f4f7'>
                <Text>Components</Text>
            </Link>
            <Link
                to={`${match.url}/props-v-state`}
                style={styles.subNavItem}
                underlayColor='#f0f4f7'>
                <Text>Props v. State</Text>
            </Link>
        </View>

        <Route path={`${match.url}/:topicId`} component={Topic} />
        <Route exact path={match.url} render={() => (
            <Text style={styles.topic}>Please select a topic.</Text>
        )} />
    </View>
);

export default class AppScreen extends React.Component {
    render() {
        return (
            <NativeRouter>
                <View style={styles.container}>
                    <UpperMenu />
                    <Route exact path="/" component={Nuovo} />
                    <Route path="/negozi" component={Negozi} />
                    <Route path="/topics" component={Topics} />
                    <Menu />
                </View>
            </NativeRouter>
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
