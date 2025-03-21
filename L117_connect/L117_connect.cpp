//
// Created by garen_lee on 2025/3/21.
/**
  ******************************************************************************
  * @file           : L117_connect.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/21
  ******************************************************************************
  */
//

#include "L117_connect.h"

void L117_connect::dfs(Node *node, int level) {
    if (node == nullptr) {
        return;
    }
    if (mp_.find(level) == mp_.end()) {
        mp_[level] = node;
    } else {
        mp_[level]->next = node;
        mp_[level] = node;
    }
    dfs(node->left, level + 1);
    dfs(node->right, level + 1);
}

Node *L117_connect::connect(Node *root) {
    mp_.clear();
    dfs(root, 0);
    return root;
}

void L117_connect::test() {
    vector<int> vals = {1, 2, 3, 4, 5, -1, 7};
    Node* root = create_node(vals);
    Node *node = connect(root);
    print_node(node);
    vals = {};
    root = create_node(vals);
    node = connect(root);
    print_node(node);
}