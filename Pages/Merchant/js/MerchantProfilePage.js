var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");
var InterApp = require("FuseJS/InterApp");

var Maps = require("FuseJS/Maps");

var name = this.Parameter.map(function(param) {
	return param.merchant.name;
});

var cover = this.Parameter.map(function(param) {
	return param.merchant.cover;
});

var tag = this.Parameter.map(function(param) {
	return param.merchant.tag;
});

var street = this.Parameter.map(function(param) {
	if(param.merchant.address!=null)
		return param.merchant.address.street;
	else
		return null;
});

var postalCode = this.Parameter.map(function(param) {
	if(param.merchant.address!=null)
		return param.merchant.address.postalCode;
	else
		return null;
});

var city = this.Parameter.map(function(param) {
	if(param.merchant.address!=null)
		return param.merchant.address.city;
	else
		return null;
});

var state = this.Parameter.map(function(param) {
	if(param.merchant.address!=null)
		return param.merchant.address.state;
	else 
		return null;
});

var gps = this.Parameter.map(function(param) {
	if(param.merchant.address!=null){
		return param.merchant.address.gps;
	}
	else
		return null;
});

var type = this.Parameter.map(function(param) {
	return param.merchant.type;
});

var site = this.Parameter.map(function(param){
	return param.merchant.site;
});

var titlePage = this.Parameter.map(function(param){
	if(param.merchant.type=='internet_store')
		return 'Negozio Online';
	else
		return 'Negozio';
});

function OpenSite(){
	if(site.value!=null)
		InterApp.launchUri(site.value);
}

function OpenMap(){
	if(gps.value!=null){
		console.log("OPEN MAP",gps.value.lat,gps.value.lng);
		Maps.searchNear(gps.value.lat, gps.value.lng, name.value);
	}
}


module.exports = {
	name:name,
	titlePage:titlePage,
	tag:tag,
	gps:gps,
	cover:cover,
	street:street,
	postalCode:postalCode,
	city:city,
	site:site,
	state:state,
	type:type,
	OpenMap:OpenMap,
	OpenSite:OpenSite
};