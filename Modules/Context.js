var Backend = require("Modules/Backend");
var ItemList = require("Entities/ItemList");
var HelpInformation = require("Entities/HelpInformation");

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
					options.push(new HelpInformation(info.id, info.title, info.text));
				});
			}
			return options;
		} catch (err) {
			console.log(err.message);
		}
	});
};

module.exports={
	getMicroCategories:getMicroCategories,
	getMacrocategories:getMacrocategories,
	getHelpInformations:getHelpInformations
};