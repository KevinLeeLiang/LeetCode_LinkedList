//
// Created by garen-lee on 2025/5/2.
/**
  ******************************************************************************
  * @file           : L237_deleteNode.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/2
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L237_DELETENODE_H
#define LINKEDLIST_L237_DELETENODE_H

#include "util.h"
class L237_deleteNode : public LeetcodeLinkedList {
private:
    void deleteNode(ListNode *node) ;
    ListNode* getNode(ListNode* head, int val);
public:
    L237_deleteNode() {}
    void test();
};


#endif //LINKEDLIST_L237_DELETENODE_H
