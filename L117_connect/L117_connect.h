//
// Created by garen_lee on 2025/3/21.
/**
  ******************************************************************************
  * @file           : L117_connect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/21
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L117_CONNECT_H
#define LINKEDLIST_L117_CONNECT_H

#include "util.h"
class L117_connect : public LeetcodeLinkedList {
private:
    unordered_map<int, Node*> mp_;
private:
    Node* connect(Node* root);
    void dfs(Node* node, int depth);
public:
    L117_connect() {}
    void test();
};


#endif //LINKEDLIST_L117_CONNECT_H
