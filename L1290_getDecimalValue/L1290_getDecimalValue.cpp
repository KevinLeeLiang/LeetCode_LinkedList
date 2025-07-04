//
// Created by garen_lee on 2025/7/4.
/**
  ******************************************************************************
  * @file           : L1290_getDecimalValue.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/4
  ******************************************************************************
  */
//

#include "L1290_getDecimalValue.h"

int L1290_getDecimalValue::getDecimalValue(ListNode *head) {
    long long sum = 0;
    if (head == nullptr) {
        return 0;
    }
    while (head != nullptr) {
        sum = sum * 2 + head->val;
        head = head->next;
    }
    return sum;
}

void L1290_getDecimalValue::test() {
    vector<int> vals = {1, 0, 1};
    ListNode *head = create_list(vals);
    cout << getDecimalValue(head) << endl;
    vals = {0};
    head = create_list(vals);
    cout << getDecimalValue(head) << endl;
    vals = {1};
    head = create_list(vals);
    cout << getDecimalValue(head) << endl;
    vals = {1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    head = create_list(vals);
    cout << getDecimalValue(head) << endl;
}