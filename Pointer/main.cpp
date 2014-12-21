//
//  main.cpp
//  Pointer
//
//  Created by mlyixi on 14/12/19.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int x;
    int *p;
    p =&x;
    cout<<"input a integer: ";
    cin>>x;
    cin.ignore();
    cout<<*p<<endl;
}
