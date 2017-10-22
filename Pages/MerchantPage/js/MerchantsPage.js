var Observable = require("FuseJS/Observable");

var Context = require("Modules/Context");

var ItemList = require("Entities/ItemList");

var items = Observable();

Context.getMacrocategories().then(function(macrocategories) {
	items.replaceAll(macrocategories);
}).catch(function(e) {
	console.log(error.message);
});

var onTapItemList = function(args) {
	router.push('newTicketStep2', {
		macrocategory: args.data
	});
};
module.exports = {
	items: items,
	onTapItemList: onTapItemList
};