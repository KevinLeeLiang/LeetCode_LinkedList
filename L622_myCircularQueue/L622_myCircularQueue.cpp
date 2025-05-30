//
// Created by garen-lee on 2025/5/30.
/**
  ******************************************************************************
  * @file           : L622_myCircularQueue.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/30
  ******************************************************************************
  */
//

#include "L622_myCircularQueue.h"

MyCircularQueue::MyCircularQueue(int k) {
    this->capacity = k + 1;
    this->elements = vector<int>(capacity);
    rear = front = 0;
}

bool MyCircularQueue::enQueue(int value) {
    if (isFull()) {
        return false;
    }
    elements[rear] = value;
    rear = (rear + 1) % capacity;
    return true;
}

bool MyCircularQueue::deQueue() {
    if (isEmpty()) {
        return false;
    }
    front = (front + 1) % capacity;
    return true;
}

int MyCircularQueue::Front() {
    if (isEmpty()) {
        return -1;
    }
    return elements[front];
}

int MyCircularQueue::Rear() {
    if (isEmpty()) {
        return -1;
    }
    return elements[(rear - 1 + capacity) % capacity];
}

bool MyCircularQueue::isEmpty() {
    return front == rear;
}

bool MyCircularQueue::isFull() {
    return (rear + 1) % capacity == front;
}


void L622_myCircularQueue::test() {
    MyCircularQueue obj(3);
    cout << obj.enQueue(1) << endl;
    cout << obj.enQueue(2) << endl;
    cout << obj.enQueue(3) << endl;
    cout << obj.enQueue(4) << endl;
    cout << obj.Rear() << endl;
    cout << obj.isFull() << endl;
    cout << obj.deQueue() << endl;
    cout << obj.enQueue(4) << endl;
    cout << obj.Rear() << endl;
}