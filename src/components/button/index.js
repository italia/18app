import React, { Component } from 'react';
import { Text, View, StyleSheet, Image, Dimensions, TouchableOpacity } from 'react-native';
import Testo from '../testo';

export default class Button extends Component {
  render() {
    const { title, icon, left, bcolor, full, round, onPress, style } = this.props
    return (
      <TouchableOpacity onPress={onPress} style={[styles.base, left && styles.left, bcolor && styles.bcolor, full && styles.full, round && styles.round, style]}>
        {title && <Testo {...this.props} style={{ paddingHorizontal: 10 }}>{title}</Testo>}
        {icon && <Image
          style={{ width: 24, height: 24, resizeMode: "contain", marginHorizontal:10 }}
          source={icon}
        />}
      </TouchableOpacity>
    )
  }
}

const styles = StyleSheet.create({
  base: {
    flexDirection: "row",
    alignItems: "center",
    justifyContent: 'center',
    padding: 10
  },
  left: {
    flexDirection: 'row-reverse'
  },
  bcolor: {
    backgroundColor: '#0066cc'
  },
  full: {
    width: Dimensions.get("window").width
  },
  round: {
    borderRadius: 5
  }
});
