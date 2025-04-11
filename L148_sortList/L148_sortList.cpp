//
// Created by garen_lee on 2025/4/11.
/**
  ******************************************************************************
  * @file           : L148_sortList.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/11
  ******************************************************************************
  */
//

#include "L148_sortList.h"

ListNode* L148_findMiddle(ListNode* node) {
    ListNode* slow = node;
    ListNode* fast = node->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* L148_sortList::merge(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    if (l1->val < l2->val){
        l1->next = merge(l1->next, l2);
        return l1;
    } else {
        l2->next = merge(l1, l2->next);
        return l2;
    }
}

ListNode* L148_sortList::sortList(ListNode *head) {
    if (!head) return nullptr;
    if (!head->next) return head;
    ListNode* mid = L148_findMiddle(head);
    ListNode* left = sortList(mid->next);
    ListNode* right = sortList(head);
    return merge(left, right);
}

void L148_sortList::test() {
    vector<int>nums = {4, 2, 1, 3};
    ListNode* head = create_list(nums);
    print_list(head);
    nums = {};
    head = create_list(nums);
    print_list(head);
}