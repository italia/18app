var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");
var items = Observable();

Context.getHelpInformations().then(function(helpInformations) {
	// console.log(JSON.stringify(helpInformations, null, 4));
	items.replaceAll(helpInformations);
}).catch(function(e) {
	console.log(error.message);
});

module.exports = {
	items: items
};