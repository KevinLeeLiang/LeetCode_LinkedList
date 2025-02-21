//
// Created by garen_lee on 2025/2/21.
/**
  ******************************************************************************
  * @file           : L82_deleteDuplicates.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/21
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L82_DELETEDUPLICATES_H
#define LINKEDLIST_L82_DELETEDUPLICATES_H

#include "util.h"
class L82_deleteDuplicates : public LeetcodeLinkedList{
private:
    ListNode* deleteDuplicates(ListNode* head);
public:
    L82_deleteDuplicates(){}
    void test();
};


#endif //LINKEDLIST_L82_DELETEDUPLICATES_H
