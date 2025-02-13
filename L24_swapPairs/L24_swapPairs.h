//
// Created by garen_lee on 2025/2/13.
/**
  ******************************************************************************
  * @file           : L24_swapPairs.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/13
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L24_SWAPPAIRS_H
#define LINKEDLIST_L24_SWAPPAIRS_H

#include "util.h"
class L24_swapPairs : public LeetcodeLinkedList{
private:
    ListNode* swapPairs(ListNode* head);
public:
    L24_swapPairs(){}
    void test();

};


#endif //LINKEDLIST_L24_SWAPPAIRS_H
