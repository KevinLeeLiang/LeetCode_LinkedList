//
// Created by garen_lee on 2025/8/1.
/**
  ******************************************************************************
  * @file           : L1669_mergeInBetween.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/1
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L1669_MERGEINBETWEEN_H
#define L146_LRUCACHE_CPP_L1669_MERGEINBETWEEN_H

#include "util.h"
class L1669_mergeInBetween : public LeetcodeLinkedList {
private:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2);
public:
    L1669_mergeInBetween() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L1669_MERGEINBETWEEN_H
