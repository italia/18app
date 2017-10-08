import { Component } from '@angular/core';
import { IonicPage, ModalController, NavController } from 'ionic-angular';
import { ListDetailPage} from '../list-detail/list-detail';
import { Item } from '../../models/item';
import { Items } from '../../providers/providers';

@IonicPage()
@Component({
  selector: 'page-list-master',
  templateUrl: 'list-master.html'
})
export class ListMasterPage {
  currentItems: Item[];

  constructor(public  navCtrl: NavController, public items: Items, public modalCtrl: ModalController) {
    this.currentItems = this.items.query();
  }

  /**
   * The view loaded, let's query our items for the list
   */
  ionViewDidLoad() {
  }

  /**
   * Prompt the user to add a new item. This shows our ItemCreatePage in a
   * modal and then adds the new item to our data source if the user created one.
   */
  // addItem() {
  //   let addModal = this.modalCtrl.create('ItemCreatePage');
  //   addModal.onDidDismiss(item => {
  //     if (item) {
  //       this.items.add(item);
  //     }
  //   })
  //   addModal.present();
  // }

  /**
   * Delete an item from the list of items.
   */
  // deleteItem(item) {
  //   this.items.delete(item);
  // }

  /**
   * Navigate to the detail page for this item.
   */
  // openItem(item: Item) {
  //   this.navCtrl.push('ItemDetailPage', {
  //     item: item
  //   });
  // }

  navigateToListDetail(item: any){
    this.navCtrl.push('ListDetailPage', {
      item: item
    });
  }

Categoria = [
              {"nome":"Supercalifragilistichespiralidoso",
               "icona":"md-camera",
               "prodotto":[
                            {"tipoPagamento":"A",
                             "iconaPagamento":"18app-gift"
                            },
                            {"tipoPagamento":"B",
                             "iconaPagamento":"18app-tickets"
                            }
                ]},

                {"nome":"Cinema",
                 "icona":"md-camera",
                 "prodotto":[
                              {"tipoPagamento":"A",
                               "iconaPagamento":"18app-gift"
                              },
                              {"tipoPagamento":"B",
                               "iconaPagamento":"18app-tickets"
                              }
                  ]}

              // {"nome":"Concerti","icona":"18app-concert", "prodotto":["A","B"]},
              // {"nome":"Eventi culturali","icona":"18app-concert", "prodotto":["A","B"]},
              // {"nome":"Libri","icona":"18app-book", "prodotto":["A","B"]},
              // {"nome":"Musei, monumenti, parchi naturali","icona":"18app-museum", "prodotto":["A","B"]},
              // {"nome":"Teatro e danza","icona":"18app-theatre", "prodotto":["A","B"]},

          ];

}
