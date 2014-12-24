//
//  main.cpp
//  EnumType
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;

typedef enum : uint {
    NOWIND,
    WEAKWIND,
    STRONGWIND
} wind_power_t;

enum wind_directions_t {
    NO_WIND,
    NORTH_WIND,
    SOUTH_WIND,
    EAST_WIND,
    WEST_WIND
};


int main(int argc, const char * argv[]) {
    wind_power_t wind_power=STRONGWIND;
    wind_directions_t wind_direction = NO_WIND;
    cout<<wind_power<<endl<<wind_direction<<endl;
    
}
