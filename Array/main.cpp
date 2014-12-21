//
//  main.cpp
//  Array
//
//  Created by mlyixi on 14/12/19.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int i,j;
    int array[8][8];
    
    for (i=0; i<8; i++) {
        for (j=0; j<8; j++) {
            array[i][j] = i * j;
            cout<<"["<<i<<"]["<<j<<"]="<< array[i][j] <<" ";
        }
    }
    
}
