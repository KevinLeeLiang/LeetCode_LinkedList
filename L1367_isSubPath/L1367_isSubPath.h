//
// Created by garen_lee on 2025/7/11.
/**
  ******************************************************************************
  * @file           : L1367_isSubPath.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/11
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L1367_ISSUBPATH_H
#define L146_LRUCACHE_CPP_L1367_ISSUBPATH_H

#include "util.h"
class L1367_isSubPath : public LeetcodeLinkedList {
private:
    bool dfs(TreeNode* rt, ListNode* head);
    bool isSubPath(ListNode* head, TreeNode* root);
public:
    L1367_isSubPath() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L1367_ISSUBPATH_H
