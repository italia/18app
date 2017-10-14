var Observable = require("FuseJS/Observable");

var Backend = require("Modules/Backend");

var Option = require("Entities/Option");

var options = Observable();

Backend.getMacrocategories().then(function(list) {
	var items = [];
	list.forEach(function(macro) {
		items.push(new Option(macro.id, macro.name, macro.icon));
	});
	options.replaceAll(items);
}).catch(function(e) {
	console.log(error.message);
});

var optionClicked = function(args) {
	router.push('newTicketStep2', {
		macrocategory: args.data
	});
};
module.exports = {
	options: options,
	optionClicked: optionClicked
};