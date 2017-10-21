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
{ id:'spid', title: "spid", text:"Lorem ipsum dolor sit amet, consectetur adipisicing elit. Porro facilis esse repellendus pariatur cumque. Vel quis repellendus, molestiae mollitia culpa, voluptatem hic blanditiis ipsa dicta consequatur dolorem nesciunt iure, libero."},
{ id:'testo2', title: "testo secondo elemento", text:"Lorem ipsum dolor sit amet, consectetur adipisicing elit. Porro facilis esse repellendus pariatur cumque. Vel quis repellendus, molestiae mollitia culpa, voluptatem hic blanditiis ipsa dicta consequatur dolorem nesciunt iure, libero."},
{ id:'testo3', title: "testo terzo elemento", text:"Lorem ipsum dolor sit amet, consectetur adipisicing elit. Porro facilis esse repellendus pariatur cumque. Vel quis repellendus, molestiae mollitia culpa, voluptatem hic blanditiis ipsa dicta consequatur dolorem nesciunt iure, libero."},
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
		console.log("creazione coupon...");
		setTimeout(function() {
			coupon.code = randomString(8);
			coupon.price=price;
			coupon.macroCategory=macroCategory;
			coupon.microCategory=microCategory;
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