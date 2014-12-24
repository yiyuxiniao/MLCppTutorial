//
//  main.cpp
//  Classes
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>

using namespace std;
class Computer {
    int speed;
    
public:
    Computer();
    ~Computer();
    void setspeed(int p);
    int getspeed();
};

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
int main(int argc, const char * argv[]) {
    Computer cmpt;
    cmpt.setspeed(10);
    cout<<cmpt.getspeed()<<endl;
}
