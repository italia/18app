var Observable = require("FuseJS/Observable");

module.exports = {
	goToNew: function() {
		router.push("newTicket");
	},
	goToMyTicket: function() {
		router.push("myTicket");
	}
};

