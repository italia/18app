var Observable = require("FuseJS/Observable");

module.exports = {
	goToNew: function() {
		console.log("Siamo qua")
		router.goto("newTicket");
	}
};

