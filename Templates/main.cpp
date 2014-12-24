//
//  main.cpp
//  Templates
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;

// 类模板
template <class T >
class calc {
    
public:
    T multiple(T x,T y){return x*y;}
    T add(T x, T y){return x+y;}
};
// 函数模板
template <class T>
inline const T& maximum(const T& x, const T& y) {
    if (y>x) {
        return y;
    }else{
        return x;
    }
}
// 类型特定
template <class T>
class vec
{
protected:
    T* vec_data;   // we'll store the data as block of dynamically allocated
    int length;    // number of elements used
    int vec_size;  // actual size of vec_data
};

template <>
class vec <bool>
{
protected:
    unsigned int *vector_data;
    int length;
    int size;
};
// 利用操作符或函数进行部分模板特定
template <typename T>
class sortedVector
{
public:
    void insert (T val)
    {
        if ( length == vec_size )   // length is the number of elements
        {
            vec_size *= 2;    // we'll just ignore overflow possibility!
            vec_data = new T[vec_size];
        }
        ++length;  // we are about to add an element
        
        // we'll start at the end, sliding elements back until we find the
        // place to insert the new element
        int pos;
        for( pos = length; pos > 0 && val > vec_data[pos - 1]; --pos )
        {
            vec_data[pos] = vec_data[pos - 1];
        }
        vec_data[pos] = val;
    }
private:
    T *vec_data;
    int length;
    int vec_size;
};


int main(int argc, const char * argv[]) {
    double x=40,y=50;
    calc<double> c;
    cout<<c.multiple(x, y)<<endl;
    cout<<maximum(x, y)<<endl;
}
