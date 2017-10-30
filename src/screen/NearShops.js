import React, {Component} from 'react';
import {
    FlatList,
    Text,
    StyleSheet,
    View,
    TouchableOpacity,
    Image,
} from 'react-native';
import ShopRow from '../component/ShopRow';
import * as Constants from '../common/constants';

const nearShops = [
    {
        id: 1,
        title: 'Nuovo cinema Paradiso',
        categories: 'Cinema/Libri',
        distance: 500,
        city: 'San Valentino in Abruzzo Citeriore (PE)',
        street: 'Corso Umberto I, 18 65020',
    },
    {
        id: 2,
        title: 'The Blues Brother',
        categories: 'Concerti',
        distance: 1300,
        city: 'San Valentino in Abruzzo Citeriore (PE)',
        street: 'Corso Umberto I, 72 65020',
    },
    {
        id: 3,
        title: 'Il libraio magico',
        categories: 'Libri',
        distance: 1300,
        city: 'San Valentino in Abruzzo Citeriore (PE)',
        street: 'Corso Umberto I, 72 65020',
    },
    {
        id: 4,
        title: 'Cats',
        categories: 'Teatro e danza',
        distance: 3000,
        city: 'San Valentino in Abruzzo Citeriore (PE)',
        street: 'Viale Roma, 7 65021',
    },
    {
        id: 5,
        title: "Gran Teatro dell'assurdo",
        categories: 'Teatro e danza',
        distance: 3000,
        city: 'San Valentino in Abruzzo Citeriore (PE)',
        street: 'Viale Roma, 34 65021',
    },
];

export default class NearShops extends Component {
    static navigationOptions = {
        title: 'VICINO A TE',
    };
    render() {
        const {navigate} = this.props.navigation;

        return (
            <View style={styles.container}>
                <FlatList
                    data={nearShops}
                    keyExtractor={item => item.id}
                    renderItem={({item}) => <ShopRow shop={item} />}
                    ListHeaderComponent={() => (
                        <Text style={styles.headerText}>
                            Questa è la lista dei {nearShops.length} negozi più
                            vicini al punto in cui ti trovi.
                        </Text>
                    )}
                />
                <TouchableOpacity style={styles.mapFooter}>
                    <Image
                        style={styles.mapIcon}
                        source={require('../res/icon-map-06c.png')}
                    />
                    <Text style={styles.mapText}>MOSTRA SULLA MAPPA</Text>
                </TouchableOpacity>
            </View>
        );
    }
}

const styles = StyleSheet.create({
    headerText: {
        padding: 20,
        fontFamily: 'titillium-regular',
        fontSize: 14,
        color: Constants.SECONDARY_GREY,
    },
    mapFooter: {
        height: 56,
        backgroundColor: Constants.WHITE,
        alignItems: 'center',
        justifyContent: 'center',
        flexDirection: 'row',
    },
    mapText: {
        color: Constants.PRIMARY_BLUE,
        fontFamily: 'titillium-bold',
        fontSize: 16,
    },
    container: {
        flex: 1,
        backgroundColor: Constants.WHITE,
    },
    mapIcon: {
        width: 18,
        height: 18,
        margin: 10,
    },
});
