//
// Created by garen_lee on 2025/4/25.
/**
  ******************************************************************************
  * @file           : L206_reverseList.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/25
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L206_REVERSELIST_H
#define L146_LRUCACHE_CPP_L206_REVERSELIST_H

#include "util.h"
class L206_reverseList : public LeetcodeLinkedList {
private:
    ListNode* reverseList(ListNode* head);
public:
    L206_reverseList() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L206_REVERSELIST_H
