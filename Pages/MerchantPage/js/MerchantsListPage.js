var Observable = require("FuseJS/Observable");

var Context = require("Modules/Context");
var Gps = require("Modules/Helpers/Gps");
var ItemList = require("Entities/ItemList");

var internetMerchants = Observable();
var nearByMerchants = Observable();


var coordinateGps= Gps.getCoordinate();

Context.getInternetMerchants().then(function(merchants) {
	internetMerchants.replaceAll(merchants);
}).catch(function(e) {
	console.log(e);
});

Context.getNearByMerchants(coordinateGps.lat,coordinateGps.lng).then(function(merchants) {
	nearByMerchants.replaceAll(merchants);
}).catch(function(e) {
	console.log(e);
});

var onTapItemList = function(args) {
	router.push('newTicketStep2', {
		macrocategory: args.data
	});
};
module.exports = {
	internetMerchants: internetMerchants,
	nearByMerchants:nearByMerchants,
	onTapItemList: onTapItemList
};