//
//  main.cpp
//  Macros
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;

// 尽量少用宏!!!
#define PI_PLUS_ONE (3.14+1)

#define INCREMENT(x) ++x

#define SWAP(a, b)  {                   \
a ^= b;         \
b ^= a;         \
a ^= b;         \
}

int main(int argc, const char * argv[]) {
    cout<<PI_PLUS_ONE<<endl;
    int x=5;
    cout<<INCREMENT(x)<<endl;
}
