//
// Created by garen_lee on 2025/6/20.
/**
  ******************************************************************************
  * @file           : L876_middleNode.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/20
  ******************************************************************************
  */
//

#include "L876_middleNode.h"

ListNode* L876_middleNode::middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void L876_middleNode::test() {
    vector<int>vals = {1, 2, 3, 4, 5};
    ListNode*head = create_list(vals);
    ListNode* res = middleNode(head);
    print_list(res);
    vals = {1, 2, 3, 4, 5, 6};
    head = create_list(vals);
    res = middleNode(head);
    print_list(res);
}