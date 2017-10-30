function Coupon(id,macroCategory,microCategory,price,currency,state,shopPlace) {
	this.id = id;
	this.macroCategory = macroCategory;
	this.microCategory= microCategory;
	this.price=price;
	this.currency=currency;
	this.state=state;
	this.shopPlace=shopPlace;

}

module.exports = Coupon;