//
// Created by garen_lee on 2025/6/13.
/**
  ******************************************************************************
  * @file           : L725_splitListToParts.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/13
  ******************************************************************************
  */
//

#include "L725_splitListToParts.h"

vector<ListNode *> L725_splitListToParts::splitListToParts(ListNode *head, int k) {
    int n = 0;
    ListNode* tmp = head;
    while (tmp) {
        n++;
        tmp = tmp->next;
    }
    int quotient = n / k, remainder = n % k;
    vector<ListNode *> parts(k, nullptr);
    ListNode* curr = head;
    for (int i = 0; i < k && curr; i++) {
        parts[i] = curr;
        int partSize = quotient + (i < remainder ? 1 : 0);
        for (int j = 1; j < partSize; j++) {
            curr = curr->next;
        }
        ListNode *next = curr->next;
        curr->next = nullptr;
        curr = next;
    }
    return parts;
}

void L725_splitListToParts::test() {
    vector<int> nums = {1, 2, 3};
    ListNode* head = create_list(nums);
    vector<ListNode*> res = splitListToParts(head, 5);
    for (auto node : res) {
        print_list(node);
    }
    cout << "++++++++++++" << endl;
    nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    head = create_list(nums);
    res = splitListToParts(head, 3);
    for (auto node : res) {
        print_list(node);
    }
    cout << "++++++++++++" << endl;
}