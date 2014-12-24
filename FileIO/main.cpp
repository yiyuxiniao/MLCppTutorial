//
//  main.cpp
//  FileIO
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, const char * argv[]) {
    ofstream ofile("/tmp/example.txt");
    ofile<<" Hello from cpp";
    ofile.close();
    
    ifstream ifile("/tmp/example.txt");
    if (!ifile.is_open()) {
        // do nothing
    }else{
        char string[30];
        ifile>>string;
        cout<<string<<endl;
        ifile.close();
    }
}
