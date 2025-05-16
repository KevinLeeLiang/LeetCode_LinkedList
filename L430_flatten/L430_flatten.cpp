//
// Created by garen_lee on 2025/5/16.
/**
  ******************************************************************************
  * @file           : L430_flatten.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/16
  ******************************************************************************
  */
//

#include "L430_flatten.h"

L430::Node *L430_flatten::flatten(L430::Node *head) {
    if (!head)
        return head;
    L430::Node* next = flatten(head->next);
    L430::Node* child = flatten(head->child);
    head->next = nullptr;
    head->child = nullptr;
    L430::Node* cur = head;
    if (child) {
        cur->next = child;
        child->prev = cur;
        while (cur->next) {
            cur = cur->next;
        }
    }
    if (next) {
        cur->next = next;
        next->prev = cur;
    }
    return head;
}

void L430_flatten::test() {

}
