var Observable = require("FuseJS/Observable");

var Context = require("Modules/Context");

var CouponList = require("Entities/CouponList");

var items = Observable();

Context.getMyCoupon().then(function(coupon) {
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