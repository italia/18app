var Observable = require("FuseJS/Observable");

var Context = require("Modules/Context");

var items = Observable();

var validItems = items.where({
	state: "Valido"
});


var notValidItems = items.where(function(item) {
	return item.state !== 'Valido';
});

Context.getCoupons().then(function(coupon) {
	items.replaceAll(coupon);
}).catch(function(e) {
	console.log(error.message);
});

var onTapItemList = function(args) {
	var couponSelected = Context.getCouponByID(args.data.id);
	router.push("newCouponStep4",{selectedItems:couponSelected.microCategory,coupon:couponSelected});
};
module.exports = {
	items: items,
	validItems: validItems,
	notValidItems:notValidItems,
	onTapItemList: onTapItemList
};