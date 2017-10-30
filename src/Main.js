import React from 'react';
import {View, StatusBar} from 'react-native';
import {connect} from 'react-redux';
import {addNavigationHelpers} from 'react-navigation';
import {Font} from 'expo';
import MainNavigation from './MainNavigation';
import MenuBottom from './container/MenuBottom';
import Login from './screen/Login';
import {loginAction} from './stores/user';

class Main extends React.Component {
    constructor(props) {
        super(props);

        this.state = {
            loaded: false,
        };
    }

    async componentDidMount() {
        await Font.loadAsync({
            'titillium-regular': require('./res/fonts/TitilliumWeb-Regular.ttf'),
            'titillium-bold': require('./res/fonts/TitilliumWeb-Bold.ttf'),
            'titillium-semibold': require('./res/fonts/TitilliumWeb-SemiBold.ttf'),
        });

        this.setState({
            loaded: true,
        });
    }

    render() {
        if (!this.state.loaded) {
            return null;
        }

        if (!this.props.logged) {
            return <Login onLogin={this.props.onLogin} />;
        }

        return (
            <View style={{flex: 1}}>
                <StatusBar barStyle="light-content" />
                <View style={{flex: 1}}>
                    <MainNavigation
                        navigation={addNavigationHelpers({
                            dispatch: this.props.dispatch,
                            state: this.props.nav,
                        })}
                    />
                </View>
                <MenuBottom />
            </View>
        );
    }
}

const mapStateToProps = state => ({
    logged: state.user.logged,
    nav: state.navigation,
});

const mapDispatchToProps = dispatch => ({
    onLogin: token => dispatch(loginAction(token)),
});

export default connect(mapStateToProps, mapDispatchToProps)(Main);
