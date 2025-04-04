//
// Created by garen-lee on 2025/4/4.
/**
  ******************************************************************************
  * @file           : L143_reorderList.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/4
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L143_REORDERLIST_H
#define LINKEDLIST_L143_REORDERLIST_H

#include "util.h"
class L143_reorderList : public LeetcodeLinkedList {
private:
    void reorderList(ListNode *head);
public:
    L143_reorderList() {}
    void test();
};


#endif //LINKEDLIST_L143_REORDERLIST_H
