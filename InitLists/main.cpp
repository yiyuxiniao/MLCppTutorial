//
//  main.cpp
//  InitLists
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;
class Baz
{
public:
    Baz() : _foo( "initialize foo first" ), _bar( "then bar" ) { }
    void display(){cout<<_foo<<","<<_bar<<endl;}
    
private:
    string _foo;
    string _bar;
};

int main(int argc, const char * argv[]) {
    Baz z;
    z.display();
}
