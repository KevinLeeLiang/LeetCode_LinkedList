//
// Created by garen-lee on 2025/5/30.
/**
  ******************************************************************************
  * @file           : L641_myCircularDeque.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/30
  ******************************************************************************
  */
//

#include "L641_myCircularDeque.h"

MyCircularDeque::MyCircularDeque(int k) {
    this->capacity = k + 1;
    this->front = 0;
    this->rear = 0;
    this->elements = vector<int>(k + 1);
}

bool MyCircularDeque::insertFront(int value) {
    if (isFull()) {
        return false;
    } else {
        front = (front - 1 + capacity) % capacity;
        elements[front] = value;
        return true;
    }
}

bool MyCircularDeque::insertLast(int value) {
    if (isFull()) {
        return false;
    } else {
        elements[rear] = value;
        rear = (rear + 1) % capacity;
        return true;
    }
}

bool MyCircularDeque::deleteFront() {
    if (isEmpty()) {
        return false;
    } else {
        front = (front + 1) % capacity;
        return true;
    }
}

bool MyCircularDeque::deleteLast() {
    if (isEmpty()) {
        return false;
    } else {
        rear = (rear - 1 + capacity) % capacity;
        return true;
    }
}

int MyCircularDeque::getFront() {
    return elements[front];
}

int MyCircularDeque::getRear() {
    if (isEmpty()) {
        return -1;
    }
    return elements[(rear - 1 + capacity) % capacity];
}

bool MyCircularDeque::isEmpty() {
    return rear == front;
}

bool MyCircularDeque::isFull() {
    return (rear + 1) % capacity == front;
}

void L641_myCircularDeque::test() {
    MyCircularDeque obj(3);
    cout << obj.insertLast(1) << endl;
    cout << obj.insertLast(2) << endl;
    cout << obj.insertFront(3) << endl;
    cout << obj.insertFront(4) << endl;
    cout << obj.getRear() << endl;
    cout << obj.isFull() << endl;
    cout << obj.deleteLast() << endl;
    cout << obj.insertFront(4) << endl;
    cout << obj.getFront() << endl;
}