//
// Created by garen_lee on 2025/2/8.
/**
  ******************************************************************************
  * @file           : L23_mergeKLists.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/8
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L23_MERGEKLISTS_H
#define LINKEDLIST_L23_MERGEKLISTS_H

#include "util.h"
class L23_mergeKLists : public LeetcodeLinkedList {
private:
    ListNode *mergeKLists(vector<ListNode *> &lists);
    ListNode* mergeTwoLists(ListNode *a, ListNode *b);
    ListNode* merge(vector <ListNode*> &lists, int l, int r);
public:
    L23_mergeKLists(){}
    void test();
};


#endif //LINKEDLIST_L23_MERGEKLISTS_H
