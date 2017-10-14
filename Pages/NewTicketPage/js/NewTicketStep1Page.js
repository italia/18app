var Observable = require("FuseJS/Observable");

var Context = require("Modules/Context");

var Option = require("Entities/Option");

var options = Observable();

Context.getMacrocategories().then(function(items) {
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