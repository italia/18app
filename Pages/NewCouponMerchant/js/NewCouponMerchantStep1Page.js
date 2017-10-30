var Observable = require("FuseJS/Observable");

var Context = require("Modules/Context");

var ItemList = require("Entities/ItemList");


var merchant = this.Parameter.map(function(param) {
	 return param.merchant;
});

var macroCategories = this.Parameter.flatMap(function(param) {
	 var items=[];
	 param.merchant.macroCategories.forEach(function(macro){
	 	items.push(new ItemList(macro.id, macro.name, macro.icon, macro.type));
	 });
	 return items;
});



var onTapItemList = function(args) {
	router.push('newCouponMerchantStep2', {
		macrocategory: args.data,
		merchant:merchant.value
	});
};
module.exports = {
	macroCategories: macroCategories,
	merchant:merchant,
	onTapItemList: onTapItemList
};