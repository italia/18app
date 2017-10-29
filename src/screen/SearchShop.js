import React, {Component} from 'react';
import {FlatList} from 'react-native';
import ShopRow from '../component/ShopRow';

export default class NearShops extends Component {
    static navigationOptions = {
        title: 'RICERCA',
    };
    render() {
        const {navigate} = this.props.navigation;

        return (
            <FlatList
                data={[
                    {
                        title: 'Nuovo cinema Paradiso',
                        categories: 'Cinema/Libri',
                        distance: 500,
                    },
                    {
                        title: 'The Blues Brother',
                        categories: 'concerti',
                        distance: 1300,
                    },
                ]}
                renderItem={({item}) => <ShopRow shop={item} />}
            />
        );
    }
}
