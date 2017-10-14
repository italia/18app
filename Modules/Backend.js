var macroCategories =
	[{
		id: "cinema",
		name: "Cinema",
		icon: "Assets/images/icon-cinema-06c.png",
		microCategories: [{
			id: "abbonamento_card",
			name: "Abbonamento/Card",
			icon: "Assets/images/icon-cinema-06c.png",
		}, {
			id: "biglietto",
			name: "Biglietto d'ingresso",
			icon: "Assets/images/icon-concerti-06c.png",
		}]
	}, {
		id: "concerti",
		name: "Concerti",
		icon: "Assets/images/icon-concerti-06c.png",
		microCategories: [{
			id: "abbonamento_card",
			name: "Abbonamento/Card",
			icon: "Assets/images/icon-cinema-06c.png",
		}, {
			id: "biglietto",
			name: "Biglietto d'ingresso",
			icon: "Assets/images/icon-concerti-06c.png",
		}]
	}, {
		id: "eventi",
		name: "Eventi culturali",
		icon: "Assets/images/icon-eventi-06c.png",
		microCategories: [{
			id: "abbonamento_card",
			name: "Abbonamento/Card",
			icon: "Assets/images/icon-cinema-06c.png",
		}, {
			id: "biglietto",
			name: "Biglietto d'ingresso",
			icon: "Assets/images/icon-concerti-06c.png",
		}]
	}, {
		id: "libri",
		name: "Libri",
		icon: "Assets/images/icon-libri-06c.png",
		microCategories: [{
			id: "abbonamento_card",
			name: "Abbonamento/Card",
			icon: "Assets/images/icon-cinema-06c.png",
		}, {
			id: "biglietto",
			name: "Biglietto d'ingresso",
			icon: "Assets/images/icon-concerti-06c.png",
		}]
	}, {
		id: "musei",
		name: "Musei",
		icon: "Assets/images/icon-musei-06c.png",
		microCategories: [{
			id: "abbonamento_card",
			name: "Abbonamento/Card",
			icon: "Assets/images/icon-cinema-06c.png",
		}, {
			id: "biglietto",
			name: "Biglietto d'ingresso",
			icon: "Assets/images/icon-concerti-06c.png",
		}]
	}, {
		id: "teatro_danza",
		name: "Teatro e Danza",
		icon: "Assets/images/icon-teatro-06c.png",
		microCategories: [{
			id: "abbonamento_card",
			name: "Abbonamento/Card",
			icon: "Assets/images/icon-cinema-06c.png",
		}, {
			id: "biglietto",
			name: "Biglietto d'ingresso",
			icon: "Assets/images/icon-concerti-06c.png",
		}]
	}];

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
			console.log(idmacro);
			for (var i = 0; i < macroCategories.length; i++) {
				console.log(macroCategories[i].id);
				if (macroCategories[i].id == idmacro) {
					resolve(macroCategories[i].microCategories);
					return;
				}
			}
			reject("microcategory not found");
		}, 0);
	});
};

module.exports = {
	getMacrocategories: getMacrocategories,
	getMicroCategories: getMicroCategories
};