//
// Created by garen-lee on 2025/5/2.
/**
  ******************************************************************************
  * @file           : L237_deleteNode.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/2
  ******************************************************************************
  */
//

#include "L237_deleteNode.h"

ListNode* L237_deleteNode::getNode(ListNode* head, int val) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head->val == val) {
        return head;
    }
    return getNode(head->next, val);
}

void L237_deleteNode::deleteNode(ListNode *node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

void L237_deleteNode::test() {
    vector<int> nums = {4,5,1,9};
    int val = 5;
    ListNode * head = create_list(nums);
    ListNode* h = head;
    ListNode* node = getNode(h,val);
    deleteNode(node);
    print_list(head);
}