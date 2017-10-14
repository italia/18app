var Observable = require("FuseJS/Observable");
var Option = require("Entities/Option");
var Context = require("Modules/Context");

var options = Observable();

var selected = this.Parameter.flatMap(function(param) {
	return param.selected;
});

var optionClicked = function(args) {

};
module.exports = {
	options: options,
	optionClicked: optionClicked,
	selected: selected
};