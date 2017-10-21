var Observable = require("FuseJS/Observable");
var ItemList = require("Entities/ItemList");
var Context = require("Modules/Context");

var items = Observable();

var selected = this.Parameter.flatMap(function(param) {
	return param.selected;
});

var optionClicked = function(args) {

};

var onTapCreateTicket = function(){

};

module.exports = {
	items: items,
	onTapCreateTicket: onTapCreateTicket,
	selected: selected
};