//
// Created by garen_lee on 2025/5/23.
/**
  ******************************************************************************
  * @file           : L445_addTwoNumbers.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/23
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L445_ADDTWONUMBERS_H
#define L146_LRUCACHE_CPP_L445_ADDTWONUMBERS_H

#include "util.h"
class L445_addTwoNumbers : public LeetcodeLinkedList {
private:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
public:
    L445_addTwoNumbers() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L445_ADDTWONUMBERS_H
