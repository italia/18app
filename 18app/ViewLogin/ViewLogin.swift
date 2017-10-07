//
//  ViewLogin.swift
//  18app
//
//  Created by Gerardo Doro on 07/10/17.
//  Copyright © 2017 devs. All rights reserved.
//

import UIKit

class ViewLogin: UIViewController {
    
    var images:[String] = []
    var names:[String] = []
    var timer = Timer()
    var photoCount:Int = 0
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        names = ["concerti", "libri", "cinema"]
        images = ["bg-concerti.png","bg-libri.png","bg-cinema.png"]
        imgViewBg.image = UIImage.init(named: "bg-concerti.png")
        timer = Timer.scheduledTimer(timeInterval: 5.0, target: self, selector: #selector(onTransition), userInfo: nil, repeats: true)
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    
    @objc func onTransition() {
        if (photoCount < images.count - 1){
            photoCount = photoCount  + 1;
        }else{
            photoCount = 0;
        }
        
        UIView.transition(with: self.imgViewBg, duration: 3.0, options: .transitionCrossDissolve, animations: {
            self.labelBg.text = self.names[self.photoCount]
            self.imgViewBg.image = UIImage.init(named: self.images[self.photoCount])
        }, completion: nil)
    }
    
    
    @IBOutlet weak var imgViewBg: UIImageView!
    @IBOutlet weak var labelBg: UILabel!
}


