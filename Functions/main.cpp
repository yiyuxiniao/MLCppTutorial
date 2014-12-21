//
//  main.cpp
//  Functions
//
//  Created by mlyixi on 14/12/19.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;
int multi(int x, int y) {
    return x*y;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int a=rand();
    int b=multi(a, a);
    cout<<b<<endl;
}
