var Observable = require("FuseJS/Observable");
var ItemList = require("Entities/ItemList");
var Context = require("Modules/Context");

var items = Observable();

var merchant = this.Parameter.map(function(param) {
	 return param.merchant;
});

var selected = this.Parameter.flatMap(function(param) {
	resetPage();
	return param.selected;
});

var price =Observable();

function resetPage(){
	price.value=null;
}

var onTapCreateCoupon = function(){
	var selectedItems=selected.toArray();
	Context.createCouponMerchant(price.value,selectedItems[0],selectedItems[1],merchant.value.id).then(function(coupon){
		router.push("newCouponMerchantStep4",{selectedItems:selected.toArray(),coupon:coupon,merchant:merchant.value});
	}).catch(function(error){
		console.log("impossibile creare buono",error);
	});
};

module.exports = {
	items: items,
	merchant:merchant,
	onTapCreateCoupon: onTapCreateCoupon,
	selected: selected,
	price:price
};