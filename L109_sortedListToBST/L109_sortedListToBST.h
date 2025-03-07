//
// Created by garen_lee on 2025/3/7.
/**
  ******************************************************************************
  * @file           : L109_sortedListToBST.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/7
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L109_SORTEDLISTTOBST_H
#define LINKEDLIST_L109_SORTEDLISTTOBST_H

#include "util.h"
class L109_sortedListToBST : public LeetcodeLinkedList {
private:
    TreeNode* sortedListToBST(ListNode* head);
    int getLength(ListNode* head);
    TreeNode* buildTree(ListNode*& head, int left, int right);
public:
    L109_sortedListToBST() {}
    void test();
};


#endif //LINKEDLIST_L109_SORTEDLISTTOBST_H
