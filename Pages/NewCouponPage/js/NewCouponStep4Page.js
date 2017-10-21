var Observable = require("FuseJS/Observable");
var ItemList = require("Entities/ItemList");
var Context = require("Modules/Context");


var selectedItems = this.Parameter.flatMap(function(param) {
	return param.selectedItems;
});

var coupon = this.Parameter.map(function(param) {
	return param.coupon;
});

function onTapCancelCoupon(){
	console.log("TODO: call api cancel Coupon");
}

module.exports = {
	selectedItems: selectedItems,
	coupon:coupon,
	onTapCancelCoupon:onTapCancelCoupon

};