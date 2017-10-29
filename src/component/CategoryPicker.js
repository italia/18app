import React, {Component} from 'react';
import {View, StyleSheet, Text, Image, TouchableOpacity} from 'react-native';
import * as Constants from '../common/constants';

export default class CategoryPicker extends Component {
    state = {open: false, selectedCategory: 'Tutte le categorie'};

    renderChoices() {
        return (
            <View style={styles.choiceContainer}>
                <TouchableOpacity
                    style={styles.categoryItem}
                    onPress={() =>
                        this.setState({
                            open: false,
                            selectedCategory: 'Cinema',
                        })}>
                    <Image
                        style={styles.icon}
                        source={require('../res/icon-cinema-06c.png')}
                    />
                    <Text style={styles.categoryText}>Cinema</Text>
                </TouchableOpacity>
                <TouchableOpacity
                    style={styles.categoryItem}
                    onPress={() =>
                        this.setState({
                            open: false,
                            selectedCategory: 'Concerti',
                        })}>
                    <Image
                        style={styles.icon}
                        source={require('../res/icon-concerti-06c.png')}
                    />
                    <Text style={styles.categoryText}>Concerti</Text>
                </TouchableOpacity>
                <TouchableOpacity
                    style={styles.categoryItem}
                    onPress={() =>
                        this.setState({
                            open: false,
                            selectedCategory: 'Eventi Culturali',
                        })}>
                    <Image
                        style={styles.icon}
                        source={require('../res/icon-eventi-06c.png')}
                    />
                    <Text style={styles.categoryText}>Eventi Culturali</Text>
                </TouchableOpacity>
            </View>
        );
    }

    render() {
        return (
            <View style={styles.container}>
                <TouchableOpacity
                    style={[
                        styles.categoryItem,
                        {
                            borderBottomWidth: this.state.open
                                ? 0
                                : StyleSheet.hairlineWidth,
                        },
                    ]}
                    onPress={() => this.setState({open: true})}>
                    <Image
                        style={[
                            styles.icon,
                            {
                                tintColor: this.state.open
                                    ? Constants.DARK_GREY
                                    : Constants.SECONDARY_GREY,
                            },
                        ]}
                        source={require('../res/icon-funnel-grey.png')}
                    />
                    <Text
                        style={[
                            styles.categoryText,
                            {
                                color:
                                    this.state.open ||
                                    this.state.selectedCategory !==
                                        'Tutte le categorie'
                                        ? Constants.DARK_GREY
                                        : Constants.SECONDARY_GREY,
                                fontFamily:
                                    this.state.selectedCategory !==
                                    'Tutte le categorie'
                                        ? Constants.TITILLIUM_BOLD
                                        : Constants.TITILLIUM_REGULAR,
                            },
                        ]}>
                        {this.state.selectedCategory}
                    </Text>
                </TouchableOpacity>
                {this.state.open && this.renderChoices()}
            </View>
        );
    }
}

const styles = StyleSheet.create({
    container: {
        padding: 20,
    },
    categoryText: {
        fontFamily: Constants.TITILLIUM_REGULAR,
        color: Constants.PRIMARY_BLUE,
        fontSize: 16,
    },
    icon: {
        tintColor: Constants.PRIMARY_BLUE,
        width: 18,
        height: 20,
        margin: 10,
    },
    categoryItem: {
        height: 40,
        alignItems: 'center',
        flexDirection: 'row',
        borderColor: Constants.SECONDARY_GREY,
    },
});
