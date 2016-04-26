//
//  main.c
//  strings
//
//  Created by Amey on 01/03/16.
//  Copyright © 2016 AMEY. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "helldo";//so
    char b[10] = "nghgheo";//de
    strcpy( b, a); //de //so
    
    printf("%s\n",a);//so
    printf("%s\n",b);//de//so

    return 0;
}
