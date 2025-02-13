//
// Created by garen_lee on 2025/2/13.
/**
  ******************************************************************************
  * @file           : L25_reverseKGroup.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/13
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L25_REVERSEKGROUP_H
#define LINKEDLIST_L25_REVERSEKGROUP_H

#include "util.h"
class L25_reverseKGroup : public LeetcodeLinkedList{
private:
    pair<ListNode*, ListNode*> reverse(ListNode* head, ListNode* tail);
    ListNode* reverseKGroup(ListNode* head, int k);
public:
    L25_reverseKGroup(){}
    void test();
};


#endif //LINKEDLIST_L25_REVERSEKGROUP_H
