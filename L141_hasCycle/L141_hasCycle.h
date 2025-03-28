//
// Created by garen_lee on 2025/3/28.
/**
  ******************************************************************************
  * @file           : L141_hasCycle.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/28
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L141_HASCYCLE_H
#define LINKEDLIST_L141_HASCYCLE_H

#include "util.h"

class L141_hasCycle : public LeetcodeLinkedList {
private:
    bool hasCycle(ListNode *head) ;

public:
    L141_hasCycle(){}
    void test();
};


#endif //LINKEDLIST_L141_HASCYCLE_H
