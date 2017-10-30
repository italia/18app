import React, {Component} from 'react';
import {View} from 'react-native';
import CategoryPicker from '../component/CategoryPicker';
import * as Constants from '../common/constants';

export default class NearShops extends Component {
    static navigationOptions = {
        title: 'RICERCA',
    };
    render() {
        const {navigate} = this.props.navigation;

        return (
            <View style={{flex: 1, backgroundColor: Constants.WHITE}}>
                <CategoryPicker />
            </View>
        );
    }
}
