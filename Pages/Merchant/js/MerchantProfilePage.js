var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");
var InterApp = require("FuseJS/InterApp");

var Maps = require("FuseJS/Maps");

var merchant = this.Parameter.map(function(param) {
	return param.merchant;
});

var titlePage = this.Parameter.map(function(param) {
	if (param.merchant.type == 'internet_store')
		return 'Negozio Online';
	else
		return 'Negozio';
});

function OpenSite() {
	if (merchant.value.site != null)
		InterApp.launchUri(merchant.value.site);
}

function OpenMap() {

	if (merchant.value.address!= null && merchant.value.address.gps != null) {
		var gps = merchant.value.address.gps;
		console.log(gps.lat,gps.lng);
		Maps.openAt(gps.lat, gps.lng);
	}
}

function CreateCoupon() {
	router.push('newCouponMerchantStep1', {
		merchant: merchant.value
	});
}


module.exports = {
	merchant: merchant,
	titlePage: titlePage,
	OpenMap: OpenMap,
	OpenSite: OpenSite,
	CreateCoupon: CreateCoupon
};