//
// Created by garen_lee on 2025/2/21.
/**
  ******************************************************************************
  * @file           : L82_deleteDuplicates.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/21
  ******************************************************************************
  */
//

#include "L82_deleteDuplicates.h"

ListNode* L82_deleteDuplicates::deleteDuplicates(ListNode* head) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head->next == nullptr) {
        return head;
    }
    ListNode* dummy = new ListNode(0, head);
    ListNode* cur = dummy;
    while (cur->next  && cur->next->next) {
        if (cur->next->val == cur->next->next->val) {
            int x = cur->next->val;
            while (cur->next != nullptr && cur->next->val == x) {
               cur->next = cur->next->next;
            }
        } else {
            cur = cur->next;
        }
    }
    return dummy->next;
}

void L82_deleteDuplicates::test() {
    vector<int>nums = {1,2,3,3,4,4,5};
    ListNode* root = create_list(nums);
    ListNode* res = deleteDuplicates(root);
    print_list(res);
    nums = {1,1,1,2,3};
    root = create_list(nums);
    res = deleteDuplicates(root);
    print_list(res);
}