import {
    StyleSheet,
} from 'react-native';

import colors from '../../style/colors';

const styles = StyleSheet.create({
    nav: {
        alignItems: 'center',
        backgroundColor: colors.main,
        borderColor: 'transparent',
        borderWidth: 1,
        justifyContent: 'center',
        flex: 0.1,
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