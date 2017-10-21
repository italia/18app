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
	Context.deleteCoupon(coupon.value.code).then(function(){
		console.log("coupon cancellato"); //TODO: portarlo su una schermata in cui si avvisa che il coupon è stato cancellato
	}).catch(function(error){
		console.log("impossibile cancellare coupon",error);
	});
}
module.exports = {
	selectedItems: selectedItems,
	coupon:coupon,
	onTapCancelCoupon:onTapCancelCoupon

};