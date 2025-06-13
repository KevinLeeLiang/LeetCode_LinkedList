//
// Created by garen_lee on 2025/6/13.
/**
  ******************************************************************************
  * @file           : L725_splitListToParts.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/13
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L725_SPLITLISTTOPARTS_H
#define L146_LRUCACHE_CPP_L725_SPLITLISTTOPARTS_H

#include "util.h"
class L725_splitListToParts : public LeetcodeLinkedList {
private:
    vector<ListNode*> splitListToParts(ListNode* head, int k);
public:
    L725_splitListToParts() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L725_SPLITLISTTOPARTS_H
