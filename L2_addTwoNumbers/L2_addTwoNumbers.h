//
// Created by garen-lee on 2025/2/4.
/**
  ******************************************************************************
  * @file           : L2_addTwoNumbers.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/4
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L2_ADDTWONUMBERS_H
#define LINKEDLIST_L2_ADDTWONUMBERS_H

#include "util.h"
class L2_addTwoNumbers : public LeetcodeLinkedList{
private:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
public:
    L2_addTwoNumbers(){}
    void test();
};


#endif //LINKEDLIST_L2_ADDTWONUMBERS_H
