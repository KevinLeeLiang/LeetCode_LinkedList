//
// Created by garen_lee on 2025/4/18.
/**
  ******************************************************************************
  * @file           : L203_removeElements.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/18
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L203_REMOVEELEMENTS_H
#define L146_LRUCACHE_CPP_L203_REMOVEELEMENTS_H

#include "util.h"
class L203_removeElements : public LeetcodeLinkedList {
private:
    ListNode* removeElements(ListNode* head, int val);
public:
    L203_removeElements() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L203_REMOVEELEMENTS_H
