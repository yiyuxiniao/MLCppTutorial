//
//  main.cpp
//  CStrings
//
//  Created by mlyixi on 14/12/22.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    char string[50];
    char *array=new char[50];
    cout<<"please input a long string: ";
    cin.getline(string, 50);
    cout<<"The string is: "<<string<<endl;
    
    cout<<"please input a long string again: ";
    cin.getline(array, 50);
    cout<<"The string is: "<<array<<endl;
}
