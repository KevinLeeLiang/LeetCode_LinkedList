//
// Created by garen-lee on 2025/2/4.
/**
  ******************************************************************************
  * @file           : L19_removeNthFromEnd.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/4
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L19_REMOVENTHFROMEND_H
#define LINKEDLIST_L19_REMOVENTHFROMEND_H

#include "util.h"
class L19_removeNthFromEnd : public LeetcodeLinkedList{
private:
    ListNode* removeNthFromEnd(ListNode* head, int n);
public:
    L19_removeNthFromEnd(){}
    void test();
};


#endif //LINKEDLIST_L19_REMOVENTHFROMEND_H
