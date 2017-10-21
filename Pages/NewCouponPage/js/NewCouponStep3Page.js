var Observable = require("FuseJS/Observable");
var ItemList = require("Entities/ItemList");
var Context = require("Modules/Context");

var items = Observable();

var selected = this.Parameter.flatMap(function(param) {
	return param.selected;
});

var price =Observable();

var optionClicked = function(args) {

};

var onTapCreateCoupon = function(){
	router.push("newCouponStep4",{selectedItems:selected.toArray(),price:price.value});
};

module.exports = {
	items: items,
	onTapCreateCoupon: onTapCreateCoupon,
	selected: selected,
	price:price
};