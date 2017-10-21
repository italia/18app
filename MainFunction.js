var Observable = require("FuseJS/Observable");

module.exports = {
	goToNew: function() {
		router.push("newTicketStep1");
	},
	goToMyTicket: function() {
		router.push("myTicket");
	},
	goToInfo: function() {
		router.push("info");
	}
};

