//
//  main.cpp
//  InlineFunc
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;

// inline means the name will be replaced by its content.
inline void hello(){
    cout<<"hello"<<endl;
}
int main(int argc, const char * argv[]) {
    hello();
}
