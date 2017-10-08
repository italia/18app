const initialState = {
    hello: 'world',
    selectedCategory: '',
    selectedProductType: '',
    couponValue: 0,
    nuovoComplete: false,
    new_categories: [
        {
            icon: '',
            label: 'Cinema',
        }, {
            icon: '',
            label: 'Concerti',
        }, {
            icon: '',
            label: 'Eventi culturali',
        }, {
            icon: '',
            label: 'Libri',
        }, {
            icon: '',
            label: 'Musei, monumenti, parchi naturali',
        }, {
            icon: '',
            label: 'Teatro e danza',
        }
    ],
    new_product_type: [
        {
            icon: '',
            label: 'Abbonamento/Card',
        },
        {
            icon: '',
            label: 'Biglietto d\'ingresso',
        },
    ],
    coupons: [
        {
            icon: '',
            selectedCategory: 'Libri',
            selectedProductType: 'Abbonamento/Card',
            couponValue: 8.10,
            spent: false
        },
        {
            icon: '',
            selectedCategory: 'Concerti',
            selectedProductType: 'Biglietto d\'ingresso',
            couponValue: 100,
            spent: true
        },
    ],
    selectedCoupon: 'Select a coupon',
    temporaryNewCoupon: {
        icon: '',
        selectedCategory: '',
        selectedProductType: '',
        couponValue: 0,
        spent: false
    }
}

export default initialState;