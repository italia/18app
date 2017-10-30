var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");
var FuseSearch = require('Libraries/fuse.min.js');
var items = Observable();

var delayTimer; // start search only when user stop typing
var searchDelay = 500;
var allHelpInformations = [];
var fuseSearchOptions = {
	  tokenize: true,
	  matchAllTokens: true,
	  findAllMatches: true,
	  minMatchCharLength: 3,
	  threshold: 0.1,
	  location: 0,
	  distance: 100,
	  keys: ['title', 'description'],
	  id: 'id'
};
var fuseSearchEmptyCollection = [];
var fuseSearch = new FuseSearch(fuseSearchEmptyCollection, fuseSearchOptions);

function showAnyHelpInformations(){
	// console.log('Visualizzo tutto');
	allHelpInformations.forEach(function(group){
		group.items.forEach(function(item){
			item.visible = true;
		});
		group.visible = true;
	});
	items.replaceAll(allHelpInformations);
}

function showOnlyThoseKeysHelpInformations(keys){
	// console.log("Fuzzy search ha trovato: ", JSON.stringify(keys));
	allHelpInformations.forEach(function(group){
		group.items.forEach(function(item){
			item.visible = keys.includes(item.id);
		});
		group.visible = group.items.some(function(item) { return item.visible});
	});
	items.replaceAll(allHelpInformations);
}

Context.getHelpInformations().then(function(helpInformations) {
	allHelpInformations = helpInformations;
	
	// imposto una collezione piatta senza gruppi, per la ricerca
	searchInformationCollection = [];
	allHelpInformations.forEach(function(group){
		group.items.forEach(function(item){
			searchInformationCollection.push(item);
		});
	});
	fuseSearch.setCollection(searchInformationCollection);

	showAnyHelpInformations();
}).catch(function(e) {
	console.log(error.message);
});

function onSearch(args) {
	// clearTimeout(delayTimer);
	// delayTimer = setTimeout(function(){
		if (args.value === "") {
			showAnyHelpInformations();
			return;
		} 
		var keys = fuseSearch.search(args.value);
		showOnlyThoseKeysHelpInformations(keys);
	// }, searchDelay);
}

module.exports = {
	items: items,
	onSearch: onSearch
};