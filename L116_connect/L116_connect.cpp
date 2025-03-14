//
// Created by garen_lee on 2025/3/14.
/**
  ******************************************************************************
  * @file           : L116_connect.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/14
  ******************************************************************************
  */
//

#include "L116_connect.h"

void L116_connect::dfs(Node *left, Node *right) {
    if (left == nullptr || right == nullptr) {
        return;
    }
    left->next = right;

    dfs(left->left, left->right);
    dfs(right->left, right->right);
    dfs(left->right, right->left);
}

Node *L116_connect::connect(Node *root) {
    if (root == nullptr) {
        return nullptr;
    }
    dfs(root->left, root->right);
    return root;
}

void L116_connect::test() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    Node *head = create_node(nums);
    Node *res = connect(head);
    print_node(res);
    nums = {};
    head = create_node(nums);
    res = connect(head);
    print_node(res);
}