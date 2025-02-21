//
// Created by garen_lee on 2025/2/21.
/**
  ******************************************************************************
  * @file           : L61_rotateRight.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/21
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L61_ROTATERIGHT_H
#define LINKEDLIST_L61_ROTATERIGHT_H

#include "util.h"
class L61_rotateRight : public LeetcodeLinkedList{
    ListNode* roterRight(ListNode* head, int k);
public:
    L61_rotateRight() {}
    void test();
};


#endif //LINKEDLIST_L61_ROTATERIGHT_H
