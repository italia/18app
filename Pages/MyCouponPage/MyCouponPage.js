var Observable = require("FuseJS/Observable");

var Context = require("Modules/Context");

var items = Observable();

var validItems = items.where({
	state: "Valido"
});


var notValidItems = items.where(function(item) {
	return item.state !== 'Valido';
});

Context.getCoupons().then(function(coupon) {
	items.replaceAll(coupon);
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
	validItems: validItems,
	notValidItems:notValidItems,
	onTapItemList: onTapItemList
};