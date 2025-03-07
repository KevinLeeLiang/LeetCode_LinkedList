//
// Created by garen_lee on 2025/3/7.
/**
  ******************************************************************************
  * @file           : L92_reverseBetween.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/7
  ******************************************************************************
  */
//

#include "L92_reverseBetween.h"

ListNode* L92_reverseBetween::reverseBetween(ListNode* head, int left, int right) {
    if (left == right) {
        return head;
    }
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode* pre = dummy;
    while (left > 1) {
        pre = pre->next;
        left--;
        right--;
    }
    ListNode* cur = pre->next;
    while (right > 1) {
        ListNode* next = cur->next;
        cur->next = next->next;
        next->next = pre->next;
        pre->next = next;
        right--;
    }
    return dummy->next;
}

void L92_reverseBetween::test() {
    vector<int>vals = {1, 2, 3, 4, 5};
    int left = 2;
    int right = 4;
    ListNode* head = create_list(vals);
    ListNode* res = reverseBetween(head, left, right);
    print_list(res);
    vals = {5};
    left = 1;
    right = 1;
    head = create_list(vals);
    res = reverseBetween(head, left, right);
    print_list(res);
}