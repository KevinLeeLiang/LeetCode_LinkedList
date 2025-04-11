//
// Created by garen_lee on 2025/4/11.
/**
  ******************************************************************************
  * @file           : L148_sortList.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/11
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L148_SORTLIST_H
#define L146_LRUCACHE_CPP_L148_SORTLIST_H

#include "util.h"
class L148_sortList : public LeetcodeLinkedList {
    ListNode* sortList(ListNode* head);
    ListNode* merge(ListNode* l1, ListNode* l2);
    ListNode* findMiddle(ListNode* node);
public:
    L148_sortList() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L148_SORTLIST_H
