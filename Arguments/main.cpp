//
//  main.cpp
//  Arguments
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    if ( argc != 2 )
        cout<<"usage: "<< argv[0] <<" <filename>\n";
    else {
        //你需要在scheme中加入参数
        ifstream the_file ( argv[1] );
        if ( !the_file.is_open() )
            cout<<"Could not open file\n";
        else {
            char x;
            while ( the_file.get ( x ) )
                cout<< x;
        }
    }
}
