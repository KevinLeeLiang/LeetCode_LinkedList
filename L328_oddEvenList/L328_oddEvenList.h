//
// Created by garen-lee on 2025/5/2.
/**
  ******************************************************************************
  * @file           : L328_oddEvenList.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/2
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L328_ODDEVENLIST_H
#define LINKEDLIST_L328_ODDEVENLIST_H

#include "util.h"
class L328_oddEvenList : public LeetcodeLinkedList {
private:
    ListNode *oddEvenList(ListNode *head);
public:
    L328_oddEvenList() {};
    void test();
};


#endif //LINKEDLIST_L328_ODDEVENLIST_H
