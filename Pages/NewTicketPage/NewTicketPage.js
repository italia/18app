var Observable = require("FuseJS/Observable");

function Catgoria(name, pathImg) {
	this.name = name;
	this.pathImg = pathImg;
	
}

var catgorie = Observable(
	new Catgoria("Cinema","C:/Users/Peppe/Desktop/18appFuse/18app/Assets/images/icon-cinema-06c.png"),
	new Catgoria("Concerti","C:/Users/Peppe/Desktop/18appFuse/18app/Assets/images/icon-concerti-06c.png"),
	new Catgoria("Eventi culturali","C:/Users/Peppe/Desktop/18appFuse/18app/Assets/images/icon-eventi-06c.png"),
	new Catgoria("Libri","C:/Users/Peppe/Desktop/18appFuse/18app/Assets/images/icon-libri-06c.png"),
	new Catgoria("Musei","C:/Users/Peppe/Desktop/18appFuse/18app/Assets/images/icon-musei-06c.png"),
	new Catgoria("Teatro e Danza","C:/Users/Peppe/Desktop/18appFuse/18app/Assets/images/icon-teatro-06c.png")
);




module.exports = {
	catgorie: catgorie
};
