//
// Created by garen_lee on 2025/3/21.
/**
  ******************************************************************************
  * @file           : L138_copyRandomList.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/21
  ******************************************************************************
  */
//

#include "L138_copyRandomList.h"

L138::Node *L138_copyRandomList::copyRandomList(L138::Node *head) {
    if (head == nullptr){
        return nullptr;
    }
    for(L138::Node* node = head; node !=nullptr; node = node->next->next) {
        L138::Node* node_new = new L138::Node(node->val);
        node_new->next = node->next;
        node->next = node_new;
    }
    for (L138::Node* node = head; node !=nullptr; node = node->next->next) {
        L138::Node* node_new = node->next;
        node_new->random = (node->random != nullptr) ? node->random->next : nullptr;
    }
    L138::Node* headNew = head->next;
    for (L138::Node* node = head; node !=nullptr; node = node->next ) {
        L138::Node* node_new = node->next;
        node->next = node->next->next;
        node_new->next = (node_new->next !=nullptr) ? node_new->next->next:nullptr;

    }
    return headNew;
}

void L138_copyRandomList::test() {

}