import React, { Component } from 'react';
import PropTypes from 'prop-types';
import {
    Platform,
    StyleSheet,
    Text,
    View
} from 'react-native'

const sizes = {
    small: 16,
    large: 32,
    medium: 20
}

const status = {
    primary: 'white',
    general: 'white',
    warning: 'red',
    white: 'white',
}

const aligns = {
    center: 'center',
    right: 'right',
    left: 'left'
}

class Testo extends Component {

    static defaultProps = {
        size: 'medium',
        stat: 'general',
        align: 'left'
    }

    static propTypes = {
        size: PropTypes.string,
        stat: PropTypes.string,
        align: PropTypes.string
      };
/*Object.keys(this.props).map(e => status[e])[0]*/
    render() {
        const { children, size, stat,bold, italic, spacerV, align } = this.props
        return (
            <Text style={[{ fontSize: sizes[size], color: status[stat]}, bold && {fontWeight:'bold'}, 
            italic && {fontStyle:'italic'}, spacerV && {marginVertical:25}, align && {textAlign: aligns[align]}]}>
                {children}
            </Text>
        );
    }
}

export default Testo;