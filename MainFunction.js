var Observable = require("FuseJS/Observable");

module.exports = {
	goToNew: function() {
		router.push("newCouponStep1");
	},
	goToMyCoupon: function() {
		router.push("myCoupon");
	},
	goToInfo: function() {
		router.push("info");
	},
	goToMerchants: function(){
		router.push("merchants");
	}
};

