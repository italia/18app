var Observable = require("FuseJS/Observable");

function Categoria(name, pathIcon) {
	this.name = name;
	this.pathIcon = pathIcon;
}

var categorie = Observable(
	new Categoria("Cinema","Assets/images/icon-cinema-06c.png"),
	new Categoria("Concerti","Assets/images/icon-concerti-06c.png"),
	new Categoria("Eventi culturali","Assets/images/icon-eventi-06c.png"),
	new Categoria("Libri","Assets/images/icon-libri-06c.png"),
	new Categoria("Musei","Assets/images/icon-musei-06c.png"),
	new Categoria("Teatro e Danza","Assets/images/icon-teatro-06c.png")
);

module.exports = {
	categorie: categorie
};