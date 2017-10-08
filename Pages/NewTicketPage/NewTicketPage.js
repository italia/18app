var Observable = require("FuseJS/Observable");

function Catgoria(name, pathImg) {
	this.name = name;
	this.pathImg = pathImg;
	
}

var catgorie = Observable(
	new Catgoria("Cinema","Assets/images/icon-cinema-06c.png"),
	new Catgoria("Concerti","Assets/images/icon-concerti-06c.png"),
	new Catgoria("Eventi culturali","Assets/images/icon-eventi-06c.png"),
	new Catgoria("Libri","Assets/images/icon-libri-06c.png"),
	new Catgoria("Musei","Assets/images/icon-musei-06c.png"),
	new Catgoria("Teatro e Danza","Assets/images/icon-teatro-06c.png")
);




module.exports = {
	catgorie: catgorie
};
