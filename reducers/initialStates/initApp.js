const initialState = {
    currentRoute: '/',
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
    selectedCoupon: {},
    temporaryNewCoupon: {
        icon: '',
        selectedCategory: '',
        selectedProductType: '',
        couponValue: 0,
        spent: false
    },
    faq: {
        'free': [{
            q: 'Contatti e Assistenza',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        }],
        '18app e il Bonus Cultura': [
        {
            q: 'Che cos’è 18app?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },
        {
            q: 'Che cos’è il Bonus Cultura?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },
        {
            q: 'Chi può beneficiare del Bonus Cultura di 500€?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },
        {
            q: 'Come spendo il Bonus Cultura?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },
        {
            q: 'Come accedo a 18app??',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },
        {
            q: 'Come mi registro a 18app?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },],
        'SPID': [{
            q: 'Che cos’è SPID?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },
        {
            q: 'A chi mi devo rivolgere e cosa devo fare per ottenere SPID?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },
        {
            q: 'Posso richiedere SPID se sono nel diciottesimo anno di età ma non ho ancora compiuto i 18 anni?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'

        },
        {
            q: 'Ho perso le mie credenziali SPID, cosa devo fare per farmele rimandare?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },],
        'Cosa acquistare': [{
            q: 'Cosa posso acquistare attraverso 18app con il Bonus Cultura?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },
        {
            q: 'Posso acquistare CD o DVD con 18app?',
            a: 'E\' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura.Il programma, destinato a chi compie 18 anni nel 2016, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza. I ragazzi hanno tempo fino al 31 gennaio 2017 per registrarsi al Bonus Cultura e fino al 31 dicembre 2017 per spendere il bonus.'
        },]
    }
}

export default initialState;