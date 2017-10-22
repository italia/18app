var Observable = require("FuseJS/Observable");

var Context = require("Modules/Context");

var items = Observable();

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
	onTapItemList: onTapItemList
};