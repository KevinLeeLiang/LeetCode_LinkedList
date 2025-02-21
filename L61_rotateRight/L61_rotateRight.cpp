//
// Created by garen_lee on 2025/2/21.
/**
  ******************************************************************************
  * @file           : L61_rotateRight.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/21
  ******************************************************************************
  */
//

#include "L61_rotateRight.h"

ListNode* L61_rotateRight::roterRight(ListNode* head, int k) {
    if (head == nullptr || head->next == nullptr || k == 0) {
        return head;
    }
    int n = 1;
    ListNode* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
        n++;
    }
    tail->next = head;
    int add = n - k % n;
    if (add == n) {
        return head;
    }
    while (add--) {
        tail = tail->next;
    }
    ListNode* res = tail->next;
    tail->next = nullptr;
    return res;
}

void L61_rotateRight::test(){
    vector<int> nums = {1,2,3,4,5};
    int k = 2;
    ListNode* head = create_list(nums);
    ListNode* res = roterRight(head, k);
    print_list(res);
    nums = {0,1,2};
    k = 4;
    head = create_list(nums);
    res = roterRight(head, k);
    print_list(res);
}