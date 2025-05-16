//
// Created by garen_lee on 2025/5/16.
/**
  ******************************************************************************
  * @file           : L430_flatten.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/16
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L430_FLATTEN_H
#define L146_LRUCACHE_CPP_L430_FLATTEN_H

#include "util.h"

namespace L430 {
    class Node {
    public:
        int val;
        Node* prev;
        Node* next;
        Node* child;
    };
}

class L430_flatten : public LeetcodeLinkedList {
    L430::Node *flatten(L430::Node *head);
public:
    L430_flatten() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L430_FLATTEN_H
