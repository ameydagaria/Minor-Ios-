//
//  mycell.swift
//  testminor1
//
//  Created by Amey on 24/02/16.
//  Copyright © 2016 AMEY. All rights reserved.
//

import UIKit

class mycell: UITableViewCell {

    @IBOutlet var mylabel: UILabel!
    @IBOutlet var myimageview: UIImageView!
    
   
    
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
