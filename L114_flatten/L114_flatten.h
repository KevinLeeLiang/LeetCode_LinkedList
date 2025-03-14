//
// Created by garen_lee on 2025/3/14.
/**
  ******************************************************************************
  * @file           : L114_flatten.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/14
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L114_FLATTEN_H
#define LINKEDLIST_L114_FLATTEN_H

#include "util.h"
class L114_flatten : public LeetcodeLinkedList {
private:
    void flatten(TreeNode *root);
public :
    L114_flatten() {}
    void test();
};


#endif //LINKEDLIST_L114_FLATTEN_H
