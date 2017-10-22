function CouponList(id,name, pathIcon,typeCoupon,price,currency,state,shopPlace) {
	this.id = id;
	this.name = name;
	this.pathIcon = pathIcon;
	this.typeCoupon=typeCoupon;
	this.price=price;
	this.currency=currency;
	this.state=state;
	this.shopPlace=shopPlace;

}

module.exports = CouponList;