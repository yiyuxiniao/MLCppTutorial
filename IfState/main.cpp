//
//  main.cpp
//  IfState
//
//  Created by mlyixi on 14/12/19.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, const char * argv[]) {
    srand((unsigned)time(NULL));
    int age=rand()%10;
    cout<<age<<endl;
    if (age<5) {
        cout << "Hello, World!\n";
    }else
    {
        cout << "Goodbye\n";
    }
    
    return 0;
}
