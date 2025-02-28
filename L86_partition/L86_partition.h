//
// Created by garen_lee on 2025/2/28.
/**
  ******************************************************************************
  * @file           : L86_partition.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/28
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L86_PARTITION_H
#define LINKEDLIST_L86_PARTITION_H

#include "util.h"
class L86_partition : public LeetcodeLinkedList {
private:
    ListNode* partition(ListNode* head, int x);
public:
    L86_partition() {}
    void test();
};


#endif //LINKEDLIST_L86_PARTITION_H
