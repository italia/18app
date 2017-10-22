var Backend = require("Modules/Backend");
var ItemList = require("Entities/ItemList");
var HelpInformation = require("Entities/HelpInformation");


var createCoupon=function(price,macroCategory,microCategory){
	return Backend.createCoupon(price, macroCategory, microCategory);
};
var deleteCoupon=function(code){
	return Backend.deleteCoupon(code);
};


var getMicroCategories= function(macroID){
	return Backend.getMicroCategories(macroID).then(function(list) {
		try {
			var options = [];
			if (list != null && list.length > 0) {
				list.forEach(function(micro) {
					options.push(new ItemList(micro.id, micro.name, micro.icon,micro.type));
				});
			}
			return options;
		} catch (err) {
			console.log(err.message);
		}
	});
};

var getMacrocategories= function(){
	return Backend.getMacrocategories().then(function(list) {
		try {
			var options = [];
			if (list != null && list.length > 0) {
				list.forEach(function(macro) {
					options.push(new ItemList(macro.id, macro.name, macro.icon,macro.type));
				});
			}
			return options;
		} catch (err) {
			console.log(err.message);
		}
	});
};


var getHelpInformations  = function(){
	return Backend.getHelpInformations().then(function(list) {
		try {
			var options = [];
			if (list != null && list.length > 0) {
				list.forEach(function(info) {
					options.push(new HelpInformation(info.id, info.title, info.description));
				});
			}
			return options;
		} catch (err) {
			console.log(err.message);
		}
	});
};

module.exports={
	createCoupon:createCoupon,
	deleteCoupon:deleteCoupon,
	getMicroCategories:getMicroCategories,
	getMacrocategories:getMacrocategories,
	getHelpInformations:getHelpInformations
};