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
		icon: "Assets/images/icon-concerti-06c.png"
	}];

getMacrocategories = function() {
	return new Promise(function(resolve, reject) {
		setTimeout(function() {
			resolve(macroCategories);
		}, 0);
	});
};

module.exports = {
	getMacrocategories: getMacrocategories()
};