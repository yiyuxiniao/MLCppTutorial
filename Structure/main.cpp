//
//  main.cpp
//  Structure
//
//  Created by mlyixi on 14/12/19.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;
struct database{
    int number;
    int age;
    float salary;
};

int main(int argc, const char * argv[]) {
    database me, *you;
    me.number=1;
    me.age=23;
    me.salary=1200.0f;
    you=&me;
    cout<<you->age<<endl;
}
