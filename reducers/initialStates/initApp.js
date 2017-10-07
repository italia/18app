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
    ]
}

export default initialState;