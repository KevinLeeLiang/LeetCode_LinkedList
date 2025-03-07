//
// Created by garen_lee on 2025/3/7.
/**
  ******************************************************************************
  * @file           : L92_reverseBetween.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/7
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L92_REVERSEBETWEEN_H
#define LINKEDLIST_L92_REVERSEBETWEEN_H

#include "util.h"
class L92_reverseBetween : public LeetcodeLinkedList {
private:
    ListNode* reverseBetween(ListNode* head, int left, int right);
public:
    L92_reverseBetween(){}
    void test();
};


#endif //LINKEDLIST_L92_REVERSEBETWEEN_H
