//
// Created by garen_lee on 2025/6/20.
/**
  ******************************************************************************
  * @file           : L876_middleNode.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/20
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L876_MIDDLENODE_H
#define L146_LRUCACHE_CPP_L876_MIDDLENODE_H

#include "util.h"
class L876_middleNode : public LeetcodeLinkedList {
private:
    ListNode* middleNode(ListNode* head);
public:
    L876_middleNode() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L876_MIDDLENODE_H
