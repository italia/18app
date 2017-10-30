var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");

var microCategories = Observable();

var merchant = this.Parameter.map(function(param) {
	 return param.merchant;
});


var macrocategory = this.Parameter.flatMap(function(param) {
	Context.getMicroCategories(param.macrocategory.id).then(function(list) {
		microCategories.replaceAll(list);
	}).catch(function(e) {
		console.log("errore",error.message);
	});
	return param.macrocategory;
});


var onTapItemList = function(args) {
	var selected=[];
	selected.push(args.data);
	selected.push(macrocategory.value);
	

	router.push('newCouponMerchantStep3', {
		selected:selected,
		merchant:merchant.value
	});
};

module.exports = {
	merchant:merchant,
	microCategories: microCategories,
	onTapItemList: onTapItemList,
	selected: macrocategory
};