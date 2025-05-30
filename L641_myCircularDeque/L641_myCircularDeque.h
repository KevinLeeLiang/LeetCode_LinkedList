//
// Created by garen-lee on 2025/5/30.
/**
  ******************************************************************************
  * @file           : L641_myCircularDeque.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/30
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L641_MYCIRCULARDEQUE_H
#define LINKEDLIST_L641_MYCIRCULARDEQUE_H

#include "util.h"

class MyCircularDeque {
public:
    MyCircularDeque(int k);
    bool insertFront(int value);
    bool insertLast(int value);
    bool deleteFront();
    bool deleteLast();
    int getFront();
    int getRear();
    bool isEmpty();
    bool isFull();
private:
    int capacity;
    int front;
    int rear;
    vector<int> elements;
};

class L641_myCircularDeque : public LeetcodeLinkedList {
public:
    L641_myCircularDeque() {}
    void test();
};


#endif //LINKEDLIST_L641_MYCIRCULARDEQUE_H
