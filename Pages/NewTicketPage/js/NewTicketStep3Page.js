var Observable = require("FuseJS/Observable");
var ItemList = require("Entities/ItemList");
var Context = require("Modules/Context");

var items = Observable();

var selected = this.Parameter.flatMap(function(param) {
	return param.selected;
});

var price =Observable();

var optionClicked = function(args) {

};

var onTapCreateTicket = function(){
	router.push("newTicketStep4",{selectedItems:selected.toArray(),price:price.value});
};

module.exports = {
	items: items,
	onTapCreateTicket: onTapCreateTicket,
	selected: selected,
	price:price
};