//
//  main.cpp
//  VaList
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
#include <cstdarg>
using namespace std;
double average(int num, ...){
    va_list args;
    double sum=0;
    va_start(args, num);
    for (int x=0; x<num; x++) {
        sum+=va_arg(args, double);
    }
    va_end(args);
    return sum/num;
}
int main(int argc, const char * argv[]) {
    cout<< average ( 3, 12.2, 22.3, 4.5 ) <<endl;
    cout<< average ( 5, 3.3, 2.2, 1.1, 5.5, 3.3 ) <<endl;
}
