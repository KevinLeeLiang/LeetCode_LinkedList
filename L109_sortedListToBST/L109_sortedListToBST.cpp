//
// Created by garen_lee on 2025/3/7.
/**
  ******************************************************************************
  * @file           : L109_sortedListToBST.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/7
  ******************************************************************************
  */
//

#include "L109_sortedListToBST.h"
int L109_sortedListToBST::getLength(ListNode* head) {
    int ret = 0;
    for (; head != nullptr; ++ret, head = head->next);
    return ret;
}

TreeNode* L109_sortedListToBST::buildTree(ListNode*& head, int left, int right) {
    if (left > right) {
        return nullptr;
    }
    int mid = (left + right + 1) / 2;
    TreeNode* root = new TreeNode();
    root->left = buildTree(head, left, mid - 1);
    root->val = head->val;
    head = head->next;
    root->right = buildTree(head, mid + 1, right);
    return root;
}

TreeNode* L109_sortedListToBST::sortedListToBST(ListNode* head) {
    int length = getLength(head);
    return buildTree(head, 0, length - 1);
}

void L109_sortedListToBST::test() {
    vector<int>vals = {-10,-3,0,5,9};
    ListNode *head = create_list(vals);
    TreeNode *res = sortedListToBST(head);
    cout << print_tree(res) << endl;
    vals = {};
    head = create_list(vals);
    res = sortedListToBST(head);
    cout << print_tree(res) << endl;
}