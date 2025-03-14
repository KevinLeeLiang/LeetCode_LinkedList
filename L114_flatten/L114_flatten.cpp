//
// Created by garen_lee on 2025/3/14.
/**
  ******************************************************************************
  * @file           : L114_flatten.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/14
  ******************************************************************************
  */
//

#include "L114_flatten.h"

void L114_flatten::flatten(TreeNode *head) {
    TreeNode *curr = head;
    while (curr != nullptr) {
        if (curr->left != nullptr) {
            auto next = curr->left;
            auto predecessor = next;
            while (predecessor->right != nullptr) {
                predecessor = predecessor->right;
            }
            predecessor->right = curr->right;
            curr->left = nullptr;
            curr->right = next;
        }
        curr = curr->right;
    }
}

void L114_flatten::test() {
    vector<int> nums = {1, 2, 5, 3, 4, -1, 6};
    TreeNode *root = create_treenode(nums, true);
    flatten(root);
    cout << print_tree(root) << endl;
    nums = {};
    root = create_treenode(nums, true);
    flatten(root);
    cout << print_tree(root) << endl;
    nums = {1};
    root = create_treenode(nums, true);
    flatten(root);
    cout << print_tree(root) << endl;
}