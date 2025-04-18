//
// Created by garen_lee on 2025/4/18.
/**
  ******************************************************************************
  * @file           : L203_removeElements.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/18
  ******************************************************************************
  */
//

#include "L203_removeElements.h"

ListNode *L203_removeElements::removeElements(ListNode *head, int val) {
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode* cur = dummy;
    while (cur->next) {
        if (cur->next->val == val) {
            cur->next = cur->next->next;
        } else {
            cur = cur->next;
        }
    }
    return dummy->next;
}

void L203_removeElements::test() {
    vector<int>nums = {1, 2, 6, 3, 4, 5, 6};
    int val = 6;
    ListNode* head = create_list(nums);
    ListNode* res = removeElements(head, val);
    print_list(res);

    nums = {};
    val = 1;
    head = create_list(nums);
    res = removeElements(head, val);
    print_list(res);

    nums = {7, 7, 7, 7};
    val = 7;
    head = create_list(nums);
    res = removeElements(head, val);
    print_list(res);
}