//
//  main.cpp
//  PartedClasses
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
#include "Computer.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Computer cmpt;
    cmpt.setspeed(10);
    cout<<cmpt.getspeed()<<endl;
}
