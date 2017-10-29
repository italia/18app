var Backend = require("Modules/Backend");
var ItemList = require("Entities/ItemList");
var Coupon = require("Entities/Coupon");
var Merchant = require("Entities/Merchant");
var HelpInformation = require("Entities/HelpInformation");

// Architettura
// queste funzioni rappresentano un layer di Traduzione dal formato dati del mondo del "backend"
// al formato dati che l'app si aspetta nel contesto
// questo livello ci consente di migliorare la modificabilita' del codice nel momento in cui
// verra' implementato o modificato in futuro il backend


var createCoupon = function(price, macroCategory, microCategory) {
	return Backend.createCoupon(price, macroCategory, microCategory);
};
var deleteCoupon = function(code) {
	return Backend.deleteCoupon(code);
};


var getMicroCategories = function(macroID) {
	return Backend.getMicroCategories(macroID).then(function(list) {
		try {
			var options = [];
			if (list != null && list.length > 0) {
				list.forEach(function(micro) {
					options.push(new ItemList(micro.id, micro.name, micro.icon, micro.type));
				});
			}
			return options;
		} catch (err) {
			console.log(err.message);
		}
	});
};

var getMacrocategories = function() {
	return Backend.getMacrocategories().then(function(list) {
		var options = [];
		if (list != null && list.length > 0) {
			list.forEach(function(macro) {
				options.push(new ItemList(macro.id, macro.name, macro.icon, macro.type));
			});
		}
		return options;
	});
};


var getHelpInformations = function() {
	return Backend.getHelpInformations().then(function(list) {
		var options = [];
		if (list != null && list.length > 0) {
			list.reverse();
			list.forEach(function(info) {
				var group = {
					group: info.group,
					items: []
				};
				info.items.reverse();
				info.items.forEach(function(info) {
					group.items.push(new HelpInformation(info.id, info.title, info.description));
				});
				options.push(group);
			});
		}
		return options;
		
	});
};

var getCoupons = function() {
	return Backend.getCoupons().then(function(list) {
		var coupons = [];
		if (list != null && list.length > 0) {
			list.forEach(function(coupon) {
				coupons.push(new Coupon(coupon.id, coupon.macroCategory, coupon.microCategory, coupon.price, coupon.currency, coupon.state, coupon.shopPlace));
			});
		}
		return coupons;
	});
};

var getInternetMerchants = function(filters) {
	return Backend.getInternetMerchants(filters).then(function(list) {
		var merchants = [];
		list.forEach(function(merchant) {
			merchants.push(new Merchant(merchant));
		});
		return merchants;
	});
};

var getNearByMerchants = function(lat,lng) {
	return Backend.getNearByMerchants(lat,lng).then(function(list) {
		var merchants = [];
		list.forEach(function(merchant) {
			merchants.push(new Merchant(merchant));
		});
		return merchants;
	});
};

module.exports = {
	createCoupon: createCoupon,
	deleteCoupon: deleteCoupon,
	getMicroCategories: getMicroCategories,
	getMacrocategories: getMacrocategories,
	getHelpInformations: getHelpInformations,
	getCoupons: getCoupons,
	getInternetMerchants:getInternetMerchants,
	getNearByMerchants:getNearByMerchants
};