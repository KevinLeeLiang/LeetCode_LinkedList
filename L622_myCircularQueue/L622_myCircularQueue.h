//
// Created by garen-lee on 2025/5/30.
/**
  ******************************************************************************
  * @file           : L622_myCircularQueue.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/30
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L622_MYCIRCULARQUEUE_H
#define LINKEDLIST_L622_MYCIRCULARQUEUE_H

#include "util.h"

class MyCircularQueue {
public:
    MyCircularQueue(int k);
    bool enQueue(int value);
    bool deQueue();
    int Front();
    int Rear();
    bool isEmpty();
    bool isFull();
private:
    int front;
    int rear;
    int capacity;
    vector<int> elements;
};

class L622_myCircularQueue : public LeetcodeLinkedList {
public:
    L622_myCircularQueue(){}
    void test();
};


#endif //LINKEDLIST_L622_MYCIRCULARQUEUE_H
