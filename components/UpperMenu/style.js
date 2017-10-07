import {
    StyleSheet,
} from 'react-native';

import colors from '../../style/colors';

const styles = StyleSheet.create({
    nav: {
        position: 'absolute',
        top: 0,
        left: 0,
        right: 0,
        alignItems: 'center',
        backgroundColor: colors.main,
        borderColor: 'transparent',
        borderWidth: 1,
        justifyContent: 'center',
        height: 48,
        flexDirection: 'row'
    },
    navElement: {
        color: '#fff',
    },
    navItem: {
        flex: 1,
        alignItems: 'center',
        padding: 10,
    },
    subNavItem: {
        padding: 5,
    }
});

export default styles;