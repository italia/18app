var Observable = require("FuseJS/Observable");
var ItemList = require("Entities/ItemList");
var Context = require("Modules/Context");

var items = Observable();

var macrocategory = this.Parameter.flatMap(function(param) {
	Context.getMicroCategories(param.macrocategory.id).then(function(microcategories) {
		items.replaceAll(microcategories);
	}).catch(function(e) {
		console.log("errore",error.message);
	});
	return param.macrocategory;
});


var onTapItemList = function(args) {
	var selected=[];
	selected.push(args.data);
	selected.push(macrocategory.value);
	

	router.push('newCouponStep3', {
		selected:selected
	});
};

module.exports = {
	items: items,
	onTapItemList: onTapItemList,
	selected: macrocategory
};