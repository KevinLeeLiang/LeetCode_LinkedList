//
// Created by garen_lee on 2025/3/28.
/**
  ******************************************************************************
  * @file           : L142_detectCycle.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/28
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L142_DETECTCYCLE_H
#define LINKEDLIST_L142_DETECTCYCLE_H

#include "util.h"
class L142_detectCycle : public LeetcodeLinkedList {
private:
    ListNode *detectCycle(ListNode *head) ;
public:
    L142_detectCycle() {}
    void test();
};


#endif //LINKEDLIST_L142_DETECTCYCLE_H
