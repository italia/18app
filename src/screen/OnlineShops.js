import React, {Component} from 'react';
import {FlatList} from 'react-native';
import ShopRow from '../component/ShopRow';
import * as Constants from '../common/constants';
import CategoryPicker from '../component/CategoryPicker';

const onlineShops = [
    {
        id: 1,
        title: 'Nuovo cinema Paradiso',
        categories: 'Cinema/Libri',
        link: 'www.prova.it',
    },
    {
        id: 2,
        title: 'The Blues Brother',
        categories: 'concerti',
        link: 'www.prova.it',
    },
];

export default class NearShops extends Component {
    static navigationOptions = {
        title: 'SU INTERNET',
    };
    render() {
        const {navigate} = this.props.navigation;

        return (
            <FlatList
                keyExtractor={item => item.id}
                style={{backgroundColor: Constants.WHITE}}
                data={onlineShops}
                renderItem={({item}) => <ShopRow shop={item} />}
                ListHeaderComponent={() => <CategoryPicker />}
            />
        );
    }
}
