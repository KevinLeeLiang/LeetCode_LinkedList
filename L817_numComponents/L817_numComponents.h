//
// Created by garen_lee on 2025/6/20.
/**
  ******************************************************************************
  * @file           : L817_numComponents.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/20
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L817_NUMCOMPONENTS_H
#define L146_LRUCACHE_CPP_L817_NUMCOMPONENTS_H

#include "util.h"
class L817_numComponents : public LeetcodeLinkedList {
private:
    int numComponents(ListNode* head, vector<int>& nums);
public:
    L817_numComponents() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L817_NUMCOMPONENTS_H
