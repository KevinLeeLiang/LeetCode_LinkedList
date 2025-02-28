//
// Created by garen_lee on 2025/2/28.
/**
  ******************************************************************************
  * @file           : L83_deleteDuplicates.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/28
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L83_DELETEDUPLICATES_H
#define LINKEDLIST_L83_DELETEDUPLICATES_H

#include "util.h"
class L83_deleteDuplicates : public LeetcodeLinkedList{
private:
    ListNode *deleteDuplicates(ListNode *head);
public:
    L83_deleteDuplicates(){}
    void test();
};


#endif //LINKEDLIST_L83_DELETEDUPLICATES_H
