//
// Created by garen_lee on 2025/6/20.
/**
  ******************************************************************************
  * @file           : L817_numComponents.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/20
  ******************************************************************************
  */
//

#include "L817_numComponents.h"

int L817_numComponents::numComponents(ListNode* head, vector<int>& nums)  {
    unordered_set<int> num_set;
    for (int num: nums) {
        num_set.insert(num);
    }
    bool is_set = false;
    int res = 0;
    while (head) {
        if (num_set.count(head->val)) {
            if (!is_set) {
                is_set = true;
                res++;
            }
        } else {
            is_set = false;
        }
        head = head->next;
    }
    return res;
}

void L817_numComponents::test() {
    vector<int> vals = {0,1,2,3};
    ListNode *head = create_list(vals);
    vector<int> nums = {0,1,3};
    cout << numComponents(head, nums) << endl;
    vals = {0,1,2,3,4};
    head = create_list(vals);
    nums = {0,3,1,4};
    cout << numComponents(head, nums) << endl;
}