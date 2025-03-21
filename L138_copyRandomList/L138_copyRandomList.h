//
// Created by garen_lee on 2025/3/21.
/**
  ******************************************************************************
  * @file           : L138_copyRandomList.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/21
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L138_COPYRANDOMLIST_H
#define LINKEDLIST_L138_COPYRANDOMLIST_H

#include "util.h"

namespace L138 {
    class Node {
    public:
        int val;
        Node *next;
        Node *random;

        Node(int _val) {
            val = _val;
            next = NULL;
            random = NULL;
        }
    };
}

class L138_copyRandomList : public LeetcodeLinkedList {
private:
    L138::Node *copyRandomList(L138::Node *head);
    unordered_map<L138::Node *, L138::Node *> map_;
public:
    L138_copyRandomList() {}
    void test();
};


#endif //LINKEDLIST_L138_COPYRANDOMLIST_H
