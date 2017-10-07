import {
  StackNavigator,
} from 'react-navigation';

import React from 'react';
import { StyleSheet, Text, View, Button, AppRegistry } from 'react-native';

// import { Provider } from 'react-redux';
import { createStore } from 'redux';
import { Provider } from 'react-redux';
import rootReducer from './reducers/rootReducer';

export const store = createStore(rootReducer);

const Home = () => (
  <Text style={styles.header}>
    Home
  </Text>
)

const About = () => (
  <Text style={styles.header}>
    About
  </Text>
)

export default class AppScreen extends React.Component {
  render() {
    return (
      <View style={styles.container}>
        <Provider store={store}>
          <Route path={`${match.url}/:topicId`} component={Topic} />
          <Route exact path={match.url} render={() => (
            <Text style={styles.topic}>Please select a topic.</Text>
          )} />
        </Provider>
      </View>
    );
  }
}

class HomeScreen extends React.Component {
  static navigationOptions = {
    title: 'Welcome',
  };
  render() {
    const { navigate } = this.props.navigation;
    return (
      <Button
        title="Go to Jane's profile"
        onPress={() =>
          navigate('Profile', { name: 'Jane' })
        }
      />
    );
  }
}


const colors = {
  main: '#0066cc'
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: colors.main,
    alignItems: 'center',
    justifyContent: 'center',
  },
});
