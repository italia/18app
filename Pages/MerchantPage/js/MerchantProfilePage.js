var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");


var name = this.Parameter.map(function(param) {
	return param.merchant.name;
});

var tag = this.Parameter.map(function(param) {
	return param.merchant.tag;
});

var street = this.Parameter.map(function(param) {
	return param.merchant.address.street;
});

var postalCode = this.Parameter.map(function(param) {
	return param.merchant.address.postalCode;
});

var city = this.Parameter.map(function(param) {
	return param.merchant.address.city;
});

var state = this.Parameter.map(function(param) {
	return param.merchant.address.state;
});

var type = this.Parameter.map(function(param) {
	return param.merchant.type;
});



module.exports = {
	name:name,
	tag:tag,
	street:street,
	postalCode:postalCode,
	city:city,
	state:state,
	type:type
};