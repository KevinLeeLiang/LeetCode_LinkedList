//
// Created by garen_lee on 2025/4/11.
/**
  ******************************************************************************
  * @file           : L147_insertSortList.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/11
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L147_INSERTSORTLIST_H
#define L146_LRUCACHE_CPP_L147_INSERTSORTLIST_H

#include "util.h"
class L147_insertSortList : public LeetcodeLinkedList {
private:
    ListNode* insertionSortList(ListNode* head);
public:
    L147_insertSortList() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L147_INSERTSORTLIST_H
