//
//  main.cpp
//  Loops
//
//  Created by mlyixi on 14/12/19.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[10];
    for (int x=0; x<10; x++) {
        a[x]=x;
        cout<<a[x]<<endl;
    }
    
    for (auto i:a) {
        cout<<i+1<<endl;
    }
}
