import React, {Component} from 'react';
import {FlatList} from 'react-native';
import ShopRow from '../component/ShopRow';

export default class NearShops extends Component {
    static navigationOptions = {
        title: 'SU INTERNET',
    };
    render() {
        const {navigate} = this.props.navigation;

        return (
            <FlatList
                data={[
                    {
                        title: 'Nuovo cinema Paradiso',
                        categories: 'Cinema/Libri',
                        link: 'www.prova.it',
                    },
                    {
                        title: 'The Blues Brother',
                        categories: 'concerti',
                        link: 'www.prova.it',
                    },
                ]}
                renderItem={({item}) => <ShopRow shop={item} />}
            />
        );
    }
}
