import {defineAsyncActions, defineAction} from '../utils/define-action';
import api from '../utils/api';

// Actions
export const LOAD = defineAsyncActions('LOAD');
export const ADD = defineAction('ADD');
export const CANCEL = defineAction('CANCEL');

// Default State
const DEFAULT_STATE = {
    isLoading: false,
    items: [
        {
            category: 'Cinema',
            description: "Biglietto d'ingresso",
            price: 8.0,
            code: '45DH001',
        },
        {
            category: 'Concerti',
            description: "Biglietto d'ingresso",
            price: 56.0,
            code: '45DH002',
        },
        {
            category: 'Teatro e danza',
            description: 'Abbonamento / Card',
            price: 128.0,
            code: '45DH003',
        },
        {
            used: new Date('2017-03-12T23:12:00'),
            category: 'Cinema',
            description: 'Abbonamento / Card',
            merchant: {
                name: 'Nuovo Cinema Paradiso',
                place: 'San Valentino in Abbruzzo Citerione (PE)',
            },
            price: 99.0,
            code: '45DH004',
        },
        {
            category: 'Musei, monumenti, parchi naturali',
            description: 'Abbonamento / Card',
            price: 150.0,
            code: '45DH005',
        },
        {
            category: 'Eventi culturali',
            description: 'Abbonamento / Card',
            price: 18.0,
            code: '45DH006',
        },
        {
            used: new Date('2017-03-12T16:12:00'),
            category: 'Libri',
            description: 'ebook',
            merchant: {
                name: 'Libreria Leggidipiù',
                place: 'San Valentino in Abbruzzo Citerione (PE)',
            },
            price: 5.0,
            code: '45DH007',
        },
        {
            used: new Date('2017-03-12T16:12:00'),
            category: 'Libri',
            description: 'ebook',
            merchant: {
                name: 'Libreria Leggidipiù',
                place: 'San Valentino in Abbruzzo Citerione (PE)',
            },
            price: 5.0,
            code: '45DH008',
        },
        {
            used: new Date('2017-03-12T16:12:00'),
            category: 'Cinema',
            description: 'Abbonamento / Card',
            merchant: {
                name: 'Nuovo Cinema Paradiso',
                place: 'San Valentino in Abbruzzo Citerione (PE)',
            },
            price: 99.0,
            code: '45DH009',
        },
    ],
};

// Reducer
export default function coupons(state = DEFAULT_STATE, action) {
    switch (action.type) {
        case LOAD.PENDING:
            return {
                ...state,
                isLoading: true,
            };

        case LOAD.FULFILLED:
            return {
                ...state,
                isLoading: false,
                items: state.items.concat(action.payload),
            };

        case ADD:
            return {
                ...state,
                isLoading: false,
                items: state.items.concat([action.coupon]),
            };

        case CANCEL:
            return {
                ...state,
                isLoading: false,
                items: state.items.filter(
                    coupon => coupon.code !== action.coupon.code,
                ),
            };

        case LOAD.REJECTED:
            return {
                ...state,
                isLoading: false,
                items: [],
            };

        default:
            return state;
    }
}

// Action creators
export function loadCoupons() {
    return {
        type: LOAD,
        payload: new Promise((resolve, reject) => {
            setTimeout(() =>
                resolve(
                    {
                        category: 'Cinema',
                        description: "Biglietto d'ingresso",
                        price: 8.0,
                        code: '45DH001',
                    },
                    {
                        category: 'Concerti',
                        description: "Biglietto d'ingresso",
                        price: 56.0,
                        code: '45DH002',
                    },
                    {
                        category: 'Teatro e danza',
                        description: 'Abbonamento / Card',
                        price: 128.0,
                        code: '45DH003',
                    },
                    {
                        used: new Date('2017-03-12T23:12:00'),
                        category: 'Cinema',
                        description: 'Abbonamento / Card',
                        merchant: {
                            name: 'Nuovo Cinema Paradiso',
                            place: 'San Valentino in Abbruzzo Citerione (PE)',
                        },
                        price: 99.0,
                        code: '45DH004',
                    },
                    {
                        category: 'Musei, monumenti, parchi naturali',
                        description: 'Abbonamento / Card',
                        price: 150.0,
                        code: '45DH005',
                    },
                    {
                        category: 'Eventi culturali',
                        description: 'Abbonamento / Card',
                        price: 18.0,
                        code: '45DH006',
                    },
                    {
                        used: new Date('2017-03-12T16:12:00'),
                        category: 'Libri',
                        description: 'ebook',
                        merchant: {
                            name: 'Libreria Leggidipiù',
                            place: 'San Valentino in Abbruzzo Citerione (PE)',
                        },
                        price: 5.0,
                        code: '45DH007',
                    },
                    {
                        used: new Date('2017-03-12T16:12:00'),
                        category: 'Libri',
                        description: 'ebook',
                        merchant: {
                            name: 'Libreria Leggidipiù',
                            place: 'San Valentino in Abbruzzo Citerione (PE)',
                        },
                        price: 5.0,
                        code: '45DH008',
                    },
                    {
                        used: new Date('2017-03-12T16:12:00'),
                        category: 'Cinema',
                        description: 'Abbonamento / Card',
                        merchant: {
                            name: 'Nuovo Cinema Paradiso',
                            place: 'San Valentino in Abbruzzo Citerione (PE)',
                        },
                        price: 99.0,
                        code: '45DH009',
                    },
                ),
            );
        }),
    };
}

// Action creators
export function cancelCoupon(coupon) {
    return {
        type: CANCEL,
        coupon,
    };
}
