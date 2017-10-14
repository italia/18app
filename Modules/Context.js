var Backend = require("Modules/Backend");
var Option = require("Entities/Option");
var getMicroCategories= function(macroID){
	return Backend.getMicroCategories(macroID).then(function(list) {
		try {
			var options = [];
			if (list != null && list.length > 0) {
				list.forEach(function(micro) {
					options.push(new Option(micro.id, micro.name, micro.icon));
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
					options.push(new Option(macro.id, macro.name, macro.icon));
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
	getMacrocategories:getMacrocategories
};