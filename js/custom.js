/**/                                                                                               
/* Funzione che determina l'area dello schermo che deve essere occupata dalla sezione principale, */  
/* in base alla grandezza di header, barra di navigazione secondaria, footer e bottoni a fine			*/
/* pagina.
/**/                                                                                             
$(document).ready(function() {
  function setHeight() {
    windowHeight = $('body').innerHeight();
    windowHeight = windowHeight-$('.navbar-fixed-top').outerHeight(true);
    windowHeight = windowHeight-$('.navbar-fixed-bottom').outerHeight(true);
    if ($('.btn-group-1').outerHeight(true) != undefined) {
      windowHeight = windowHeight-$('.btn-group-1').outerHeight(true);
    }
    if ($('.btn-group-2').outerHeight(true) != undefined) {
      windowHeight = windowHeight-$('.btn-group-2').outerHeight(true);
    }
    windowHeight =  windowHeight-20;

    $('.list-group').css('height', windowHeight);
  };
  setHeight();
  
  $(window).resize(function() {
    setHeight();
  });
});

/**/
/* Funzione di base per il funzionameno della classe Accordion*/
/**/
var acc = document.getElementsByClassName("accordion");
var i;

for (i = 0; i < acc.length; i++) {
    acc[i].onclick = function(){
        /* Toggle between adding and removing the "active" class,
        to highlight the button that controls the panel */
        this.classList.toggle("active");

        /* Toggle between hiding and showing the active panel */
        var panel = this.nextElementSibling;
        if (panel.style.display === "block") {
            panel.style.display = "none";
        } else {
            panel.style.display = "block";
        }
    }
}