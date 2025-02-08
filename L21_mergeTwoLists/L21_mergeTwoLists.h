//
// Created by garen_lee on 2025/2/8.
/**
  ******************************************************************************
  * @file           : L21_mergeTwoLists.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/8
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L21_MERGETWOLISTS_H
#define LINKEDLIST_L21_MERGETWOLISTS_H

#include "util.h"
class L21_mergeTwoLists : public LeetcodeLinkedList{
private:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
public:
    L21_mergeTwoLists(){}
    void test();
};


#endif //LINKEDLIST_L21_MERGETWOLISTS_H
