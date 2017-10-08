import React, { Component } from 'react';
import {
    Platform,
    StyleSheet,
    Text,
    View
} from 'react-native'

import Testo from '../testo';
/**
 * 
*/
class SlideShowText extends Component {

    constructor(props) {
        super(props)

        this.state = {
            text: props.text[0],
            index: 0
        }

        this.timer = setInterval(()=>{
            this.showtext()
        }, 2000)

    }

    componentWillUnmount() {
        clearInterval(this.timer)
    }

    showtext() {
        const index = this.props.text[this.state.index] ? this.state.index : 0
        this.setState({
            text: this.props.text[index],
            index: index + 1
        })
    }

    render() {
        return (
            <Testo italic size='large' spacerV >{this.state.text}</Testo>
        );
    }
}

export default SlideShowText;