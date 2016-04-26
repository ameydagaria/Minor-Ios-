//
//  main.cpp
//  droid11
//
//  Created by Amey on 19/03/16.
//  Copyright © 2016 AMEY. All rights reserved.
//

#include <iostream>

void myfunc (int x) {
    if(x>0){
    
        myfunc(--x);
        std::cout<<"x";
        
        
    
    }


}



int main() {
    
    
    myfunc(5);
    
    
    
    //std::cout << "Hello, World!\n";
    return 0;
}
