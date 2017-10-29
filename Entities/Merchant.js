function Merchant(item){
	this.id=item.id;
	this.name=item.name;
	this.type=item.type;
	this.macroCategories=item.macroCategories;
	this.site=item.site;
	this.distance=item.distance;
	this.tag=createTag(this.macroCategories);
}

/**
 * creo un tag in base ai nomi delle macrocategorie associate a questo merchant
 * @return {string} tag creato
 */
 function createTag(macroCategories){
 	var tag="";
 	if(macroCategories!==undefined){
 		macroCategories.forEach(function(category){
 			tag+=category.name+", ";
 		});
 		tag= tag.slice(0,-2);
 	}
 	
 	return tag;
 }

 module.exports=Merchant;