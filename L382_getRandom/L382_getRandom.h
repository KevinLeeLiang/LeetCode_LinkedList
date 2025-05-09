//
// Created by garen_lee on 2025/5/9.
/**
  ******************************************************************************
  * @file           : L382_getRandom.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/9
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L382_GETRANDOM_H
#define L146_LRUCACHE_CPP_L382_GETRANDOM_H

#include "util.h"
namespace L382 {
    class Solution {
        vector<int>arr;
    public:
        Solution(ListNode* head) {
            while (head) {
                arr.push_back(head->val);
                head = head->next;
            }
        }
        int getRandom() {
            return arr[rand() % arr.size()];
        }
    };
}
class L382_getRandom : public LeetcodeLinkedList {
public:
    L382_getRandom() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L382_GETRANDOM_H
