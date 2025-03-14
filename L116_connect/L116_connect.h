//
// Created by garen_lee on 2025/3/14.
/**
  ******************************************************************************
  * @file           : L116_connect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/14
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L116_CONNECT_H
#define LINKEDLIST_L116_CONNECT_H

#include "util.h"
class L116_connect : public LeetcodeLinkedList {
private:
    void dfs(Node *left, Node *right);
    Node *connect(Node *root);
public:
    L116_connect() {}
    void test();
};


#endif //LINKEDLIST_L116_CONNECT_H
