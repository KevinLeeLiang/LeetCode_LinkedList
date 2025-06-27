//
// Created by garen_lee on 2025/6/27.
/**
  ******************************************************************************
  * @file           : L1019_nextLargerNodes.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/27
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L1019_NEXTLARGERNODES_H
#define L146_LRUCACHE_CPP_L1019_NEXTLARGERNODES_H

#include "util.h"
class L1019_nextLargerNodes : public LeetcodeLinkedList {
private:
    vector<int> nextLargerNodes(ListNode* head);
public:
    L1019_nextLargerNodes() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L1019_NEXTLARGERNODES_H
