var macroCategories =
[{
	id: "cinema",
	name: "Cinema",
	icon: "Assets/images/icon-cinema-06c.png",
	type: "Categoria",
	microCategories: [{
		id: "abbonamento_card",
		name: "Abbonamento/Card",
		icon: "Assets/images/icon-cinema-06c.png",
		type:"prodotto"
	}, {
		id: "biglietto",
		name: "Biglietto d'ingresso",
		icon: "Assets/images/icon-concerti-06c.png",
		type:"prodotto"
	}]
}, {
	id: "concerti",
	name: "Concerti",
	icon: "Assets/images/icon-concerti-06c.png",
	type: "Categoria",
	microCategories: [{
		id: "abbonamento_card",
		name: "Abbonamento/Card",
		icon: "Assets/images/icon-cinema-06c.png",
		type:"prodotto"
	}, {
		id: "biglietto",
		name: "Biglietto d'ingresso",
		icon: "Assets/images/icon-concerti-06c.png",
		type:"prodotto"
	}]
}, {
	id: "eventi",
	name: "Eventi culturali",
	icon: "Assets/images/icon-eventi-06c.png",
	type:"Categoria",
	microCategories: [{
		id: "abbonamento_card",
		name: "Abbonamento/Card",
		icon: "Assets/images/icon-cinema-06c.png",
		type:"prodotto"
	}, {
		id: "biglietto",
		name: "Biglietto d'ingresso",
		icon: "Assets/images/icon-concerti-06c.png",
		type:"prodotto"
	}]
}, {
	id: "libri",
	name: "Libri",
	icon: "Assets/images/icon-libri-06c.png",
	type:"Categoria",
	microCategories: [{
		id: "abbonamento_card",
		name: "Abbonamento/Card",
		icon: "Assets/images/icon-cinema-06c.png",
		type:"prodotto"
	}, {
		id: "biglietto",
		name: "Biglietto d'ingresso",
		icon: "Assets/images/icon-concerti-06c.png",
		type:"prodotto"
	}]
}, {
	id: "musei",
	name: "Musei",
	icon: "Assets/images/icon-musei-06c.png",
	type:"Categoria",
	microCategories: [{
		id: "abbonamento_card",
		name: "Abbonamento/Card",
		icon: "Assets/images/icon-cinema-06c.png",
		type:"prodotto"
	}, {
		id: "biglietto",
		name: "Biglietto d'ingresso",
		icon: "Assets/images/icon-concerti-06c.png",
		type:"prodotto"
	}]
}, {
	id: "teatro_danza",
	name: "Teatro e Danza",
	icon: "Assets/images/icon-teatro-06c.png",
	type:"Categoria",
	microCategories: [{
		id: "abbonamento_card",
		name: "Abbonamento/Card",
		icon: "Assets/images/icon-cinema-06c.png",
		type:"prodotto"
	}, {
		id: "biglietto",
		name: "Biglietto d'ingresso",
		icon: "Assets/images/icon-concerti-06c.png",
		type:"prodotto"
	}]
}];

var helpInformations = [
	{ 
		group: '', 
		items: [
			{ id:'Contacts', group:'', title: "Contatti e Assistenza", description:" Assistenza tecnica: 800.991.199 da lunedì a venerdì esclusi festivi - dalle ore 09.00 alle 17.30 - Assistenza SPID: 06.82888.736 da lunedì a venerdì - dalle 9.30 alle 16.00 Helpdesk SPID "},
		]
	},
	{ 
		group: '18app e Bonus Cultura', 
		items: [
			{ id:'18app', title: "Cos'è 18app?", description:"18app è un’applicazione web che permette di gestire il Bonus Cultura di 500€ riservato a tutti i cittadini residenti in Italia (in possesso, ove previsto, di permesso di soggiorno in corso di validità) che compiono i diciotto anni di età nell’anno 2017. E’ realizzata per: • consentire agli esercenti di registrarsi al servizio ed offrire la vendita dei beni previsti dalla normativa ai diciottenni • consentire ai diciottenni di generare i buoni per l’acquisto dei beni offerti dagli esercenti registrati al servizio."},
			{ id:'BonusCultura', title: "Cos'è il Bonus Cultura?", description:"E' un’iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicata a promuovere la cultura. Il programma, destinato a chi compie 18 anni nel 2017, permette di ottenere 500€ da spendere in cinema, musica e concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza, corsi di musica, di teatro o di lingua straniera. I ragazzi hanno tempo fino al 30 giugno 2018 per registrarsi a 18app e fino al 31 dicembre 2018 per spendere il Bonus Cultura."},
			{ id:'BonusCulturaChi', title: "Chi può beneficiare del Bonus Cultura di 500€?", description:"Tutti i cittadini residenti nel territorio nazionale (in possesso, ove previsto, di permesso di soggiorno in corso di validità) che compiono i diciotto anni di età nell’anno 2017."},
		]
	},
	{ 
		group: 'SPID', 
		items: [
			{ id:'SPID', title: "Cos’è SPID?", description:"SPID (il Sistema Pubblico d’Identità Digitale) è la tua nuova identità digitale composta da credenziali (nome utente e password) che puoi richiedere dal giorno del tuo diciottesimo compleanno e che dovrai utilizzare tutte le volte che vorrai accedere a 18app. Maggiori informazioni sul sito spid.gov.it "},
			{ id:'SPIDe18app', title: "Perché devo avere delle credenziali SPID per poter accedere a 18app?", description:"Perché dobbiamo essere sicuri che sei proprio tu a chiedere l’accesso in modo da permetterti di spendere in totale sicurezza il tuo bonus cultura. Le credenziali SPID che riceverai una volta fatta la richiesta sono uniche e potrai usarle soltanto tu. "},
		]
	},
	{ 
		group: 'Come acquistare', 
		items: [
			{ id:'BonusCulturaCosa', title: "Cosa posso acquistare attraverso 18app con il Bonus Cultura?", description:"Se sei nato nel 1999, puoi acquistare (entro dicembre 2018) beni per un totale di 500€, esclusivamente riconducibili ai seguenti ambiti: a. Cinema (abbonamento card/biglietto d’ingresso) b. Concerti (abbonamento card/biglietto d’ingresso) c. Eventi culturali (biglietto d’ingresso a festival, fiere culturali, circhi) d. Libri (audiolibro, ebook, libro) e. Musei, monumenti e parchi (abbonamento card/biglietto d’ingresso) f. Teatro e danza (abbonamento card/biglietto d’ingresso) g. Musica registrata (cd, dvd musicali, dischi in vinile, musica on line) h. Corsi di musica, di teatro o di lingua straniera. Se sei nato nel 1998, puoi acquistare (entro dicembre 2017) beni per un totale di 500€, esclusivamente riconducibili ai seguenti ambiti: a. Cinema (abbonamento card/biglietto d’ingresso) b. Concerti (abbonamento card/biglietto d’ingresso) c. Eventi culturali (biglietto d’ingresso a festival, fiere culturali, circhi) d. Libri (audiolibro, ebook, libro) e. Musei, monumenti e parchi (abbonamento card/biglietto d’ingresso) f. Teatro e danza (abbonamento card/biglietto d’ingresso) "},
			{ id:'DVDeCD', title: "Posso acquistare CD o DVD con 18app?", description:"Sì, ma solo se sei nato nel 1999. E’ possibile acquistare solo dvd musicali, sono esclusi i dvd cinematografici."},
		]
	},
];



var coupon ={
	code:"45DH6789",
	price:8.00,
	currency:"€",
	user:{
		id:"1001010",
		"name":"Mario",
		"surname":"Rossi"
	},
	macroCategory:{
		id: "teatro_danza",
		name: "Teatro e Danza",
		icon: "Assets/images/icon-teatro-06c.png",
		type:"Categoria"
	},
	microcategory:{
		id: "biglietto",
		name: "Biglietto d'ingresso",
		icon: "Assets/images/icon-concerti-06c.png",
		type:"prodotto"
	},
	qrcode:"Assets/images/qrcode-example.jpg",
	barcode:"Assets/images/barcode-example.jpg"
};

var deleteCoupon = function (code){
	return new Promise(function(resolve, reject) {
		console.log("cancellazione coupon",code);
		setTimeout(function() {
			resolve({success:true});
		}, 0);
	});
};

function randomString(length) {
	var chars='0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
    var result = '';
    for (var i = length; i > 0; --i) result += chars[Math.floor(Math.random() * chars.length)];
    return result;
}


var createCoupon = function(price,macroCategory,microCategory){
	return new Promise(function(resolve, reject) {
		setTimeout(function() {
			coupon.code = randomString(8);
			coupon.price=price;
			coupon.macroCategory=macroCategory;
			coupon.microCategory=microCategory;
			console.log("creato Coupon: "+coupon.code);
			resolve(coupon);
		}, 0);
	});
};

var getMacrocategories = function() {
	return new Promise(function(resolve, reject) {
		setTimeout(function() {
			resolve(macroCategories);
		}, 0);
	});
};

var getMicroCategories = function(idmacro) {
	return new Promise(function(resolve, reject) {
		setTimeout(function() {
			for (var i = 0; i < macroCategories.length; i++) {
				if (macroCategories[i].id == idmacro) {
					resolve(macroCategories[i].microCategories);
					return;
				}
			}
			reject("microcategory not found");
		}, 0);
	});
};

var getHelpInformations = function() {
	return new Promise(function(resolve, reject) {
		setTimeout(function() {
			//console.log("Debug inspect object: ", JSON.stringify(helpInformations, null, 4));
			resolve(helpInformations);
		}, 0);
	});
};

module.exports = {
	deleteCoupon:deleteCoupon,
	createCoupon:createCoupon,
	getMacrocategories: getMacrocategories,
	getMicroCategories: getMicroCategories,
	getHelpInformations:getHelpInformations
};