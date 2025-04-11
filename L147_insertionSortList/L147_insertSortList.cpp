//
// Created by garen_lee on 2025/4/11.
/**
  ******************************************************************************
  * @file           : L147_insertSortList.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/11
  ******************************************************************************
  */
//

#include "L147_insertSortList.h"

ListNode* L147_insertSortList::insertionSortList(ListNode* head) {
    if (head == nullptr)
        return head;
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* lastSorted = head;
    ListNode* cur = head->next;
    while (cur != nullptr) {
        if (lastSorted->val <= cur->val) {
            lastSorted = lastSorted->next;
        } else {
            ListNode *prev = dummy;
            while (prev->next->val <= cur->val) {
                prev = prev->next;
            }
            lastSorted->next = cur->next;
            cur->next = prev->next;
            prev->next = cur;
        }
        cur = lastSorted->next;
    }
    return dummy->next;
}

void L147_insertSortList::test() {
    vector<int> nums = {4, 2, 1, 3};
    ListNode* head = create_list(nums);
    ListNode* res = insertionSortList(head);
    print_list(res);
    nums = {-1, 5, 3, 4, 0};
    head = create_list(nums);
    res = insertionSortList(head);
    print_list(res);
}