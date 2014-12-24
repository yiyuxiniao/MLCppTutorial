//
//  main.cpp
//  Casting
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cout<< (char)65<<endl; // c way
    cout<<char(65)<<endl; // cpp way
    cout<<static_cast<char>(65)<<endl; // recommended
}
