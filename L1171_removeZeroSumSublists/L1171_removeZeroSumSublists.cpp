//
// Created by garen_lee on 2025/6/27.
/**
  ******************************************************************************
  * @file           : L1171_removeZeroSumSublists.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/27
  ******************************************************************************
  */
//

#include "L1171_removeZeroSumSublists.h"

ListNode* L1171_removeZeroSumSublists::removeZeroSumSublists(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    int prefix = 0;
    unordered_map<int, ListNode*> mp;
    for (ListNode* cur = dummy; cur != nullptr; cur = cur->next) {
        prefix += cur->val;
        mp[prefix] = cur;
    }
    prefix = 0;
    for (ListNode* cur = dummy; cur != nullptr; cur = cur->next) {
        prefix += cur->val;
        cur->next = mp[prefix]->next;
    }
    return dummy->next;
}

void L1171_removeZeroSumSublists::test() {
    vector<int> nums = {1, 2, -3, 3, 1};
    ListNode* head = create_list(nums);
    ListNode* res = removeZeroSumSublists(head);
    print_list(res);
    nums = {1, 2, 3, -3, 4};
    head = create_list(nums);
    res = removeZeroSumSublists(head);
    print_list(res);
    nums = {1, 2, 3, -3, -2};
    head = create_list(nums);
    res = removeZeroSumSublists(head);
    print_list(res);
}