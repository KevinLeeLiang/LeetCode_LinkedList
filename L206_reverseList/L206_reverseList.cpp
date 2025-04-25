//
// Created by garen_lee on 2025/4/25.
/**
  ******************************************************************************
  * @file           : L206_reverseList.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/25
  ******************************************************************************
  */
//

#include "L206_reverseList.h"

ListNode* L206_reverseList::reverseList(ListNode* head) {
    ListNode* pre = nullptr;
    ListNode* cur = head;
    while (cur != nullptr) {
        ListNode* next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}

void L206_reverseList::test() {
    vector<int>nums = {1,2,3,4,5};
    ListNode* head = create_list(nums);
    ListNode* res = reverseList(head);
    print_list(res);
    nums = {1,2};
    head = create_list(nums);
    res = reverseList(head);
    print_list(res);
    nums = {};
    head = create_list(nums);
    res = reverseList(head);
    print_list(res);
}