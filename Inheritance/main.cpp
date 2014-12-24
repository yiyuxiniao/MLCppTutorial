//
//  main.cpp
//  Inheritance
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void shapeName() const =0; // 纯虚函数, 说明shape是个虚类

};

class Point  : public Shape
{
public:
    Point(float a=0,float b=0){x=a; y=b; }
    void setPoint(float a,float b){x=a; y=b; }
    float getX( )const {return x;}
    float getY( )const {return y;}
    
    virtual void shapeName() const {cout << "I'm a point!" << endl;}  //重写纯虚方法,可以不带virtual等,但要和纯虚方法保持一致(v如const)
    
protected:
    float x,y;
};

class Circle : public Point
{
public:
    Circle(float a=0,float b=0,float r=0){x=a; y=b; radius=r;}
    void setRadius(float r){radius=r; }
    float getRadius( )const {return radius; }
    void shapeName() const { cout << "I'm a circle!" << endl; } //重写纯虚方法, 名称相同即可
protected:
    float radius;
};


int main(int argc, const char * argv[]) {
    Point p;
    p.shapeName();
    Circle c;
    c.shapeName();
}
