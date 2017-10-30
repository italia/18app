var Observable = require("FuseJS/Observable");
var ItemList = require("Entities/ItemList");
var Context = require("Modules/Context");

var items = Observable();

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
	Context.createCoupon(price.value,selectedItems[0],selectedItems[1]).then(function(coupon){
		router.push("newCouponStep4",{selectedItems:selected.toArray(),coupon:coupon, feedback: "Il nuovo buono è stato creato correttamente"});
	}).catch(function(error){
		console.log("impossibile creare buono",error);
	});
};

module.exports = {
	items: items,
	onTapCreateCoupon: onTapCreateCoupon,
	selected: selected,
	price:price
};