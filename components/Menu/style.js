import {
    StyleSheet,
} from 'react-native';

import colors from '../../style/colors';

const styles = StyleSheet.create({
    nav: {
        right: 0,
        alignItems: 'center',
        backgroundColor: colors.main,
        borderColor: 'transparent',
        borderWidth: 1,
        justifyContent: 'center',
        height: 64,
        flex: .2,
        flexDirection: 'row',
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
    },
    navIcon: {
        marginBottom: 5,
        width: 30,
        height: 30
    }
});

export default styles;