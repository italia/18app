var Observable = require("FuseJS/Observable");
var Option = require("Entities/Option");
var Context = require("Modules/Context");

var options = Observable();

var macrocategory = this.Parameter.flatMap(function(param) {
	Context.getMicroCategories(param.macrocategory.id).then(function(items) {
		options.replaceAll(items);
	}).catch(function(e) {
		console.log("errore",error.message);
	});
	return param.macrocategory;
});


var optionClicked = function(args) {
	var selected=[];
	selected.push(macrocategory.value);
	selected.push(args.data);

	router.push('newTicketStep3', {
		selected:selected
	});
};

module.exports = {
	options: options,
	optionClicked: optionClicked,
	selected: macrocategory
};