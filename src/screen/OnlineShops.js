import React, {Component} from 'react';
import {FlatList} from 'react-native';
import ShopRow from '../component/ShopRow';
import * as Constants from '../common/constants';
import CategoryPicker from '../component/CategoryPicker';

const onlineShops = [
    {
        id: 1,
        title: 'Scuolabook',
        categories: 'Cinema/Libri',
        link: 'www.scuolabook.it',
    },
    {
        id: 2,
        title: 'Cineteatro Nuovo Arcore',
        categories: 'concerti',
        link: 'www.cineteatronuovoarcore.it',
    },
    {
        id: 3,
        title: 'TicketOne',
        categories:
            'Concerti / Eventi Culturali / Musei, monumenti e parchi naturali / Teatro e Danza',
        link: 'www.ticketone.it/18app',
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
