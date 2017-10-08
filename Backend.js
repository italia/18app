var categorie = [
	{
		"name": "Cinema"
	},
	{
		"name": "Concerti"
	},
	{
		"name": "Eventi culturali"
	},
	{
		"name": "Eventi culturali"
	},
	{
		"name": "Libri"
	},
	{
		"name": "Musei"
	},
	{
		"name": "Teatro"
	}
];

function clone(obj) {
	return JSON.parse(JSON.stringify(obj));
}

function getCategorie() {
	return clone(pets);
}


module.exports = {
	getCategorie: getCategorie
};
