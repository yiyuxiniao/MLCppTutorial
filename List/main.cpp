//
//  main.cpp
//  List
//
//  Created by mlyixi on 14/12/24.
//  Copyright (c) 2014年 mlyixi. All rights reserved.
//

#include <iostream>
using namespace std;

struct node {
    int x;
    node *next;
};

int main()
{
    node *root;       // 头
    node *conductor;  // 链表当前指针
    
    root = new node;  // 创建头
    root->next = 0;
    root->x = 12;
    conductor = root; // 当前指针指向头
    
    
    conductor->next = new node;  // 新建一个节点
    conductor = conductor->next; // 当前指针指向该节点
    conductor->x = 22;
    conductor->next = new node;  // 新建尾节点
    conductor = conductor->next; // 当前指针指向该节点
    conductor->x = 32;
    conductor->next = 0; // 结束线性链表或指向root形成环状链表.
    
    // 遍历当前链表
    conductor=root;
    if ( conductor != 0 ) {
        while ( conductor->next != 0){
            cout<<conductor->x<<endl;
            conductor = conductor->next;
        }
        
    }
}
