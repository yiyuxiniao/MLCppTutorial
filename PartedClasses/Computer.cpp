//
//  Computer.cpp
//  MLCppTutorial
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include "Computer.h"

Computer::Computer(){
    speed=0;
}
Computer::~Computer(){
    //Destructors do not accept arguments
}

void Computer::setspeed(int p){
    speed=p;
}
int Computer::getspeed(){
    return speed;
}

