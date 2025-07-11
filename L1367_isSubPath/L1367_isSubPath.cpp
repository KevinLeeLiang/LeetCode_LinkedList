//
// Created by garen_lee on 2025/7/11.
/**
  ******************************************************************************
  * @file           : L1367_isSubPath.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/11
  ******************************************************************************
  */
//

#include "L1367_isSubPath.h"

bool L1367_isSubPath::dfs(TreeNode* rt, ListNode* head) {
    // 链表已经全部匹配完，匹配成功
    if (head == NULL) return true;
    // 二叉树访问到了空节点，匹配失败
    if (rt == NULL) return false;
    // 当前匹配的二叉树上节点的值与链表节点的值不相等，匹配失败
    if (rt->val != head->val) return false;
    return dfs(rt->left, head->next) || dfs(rt->right, head->next);
}

bool L1367_isSubPath::isSubPath(ListNode *head, TreeNode *root) {
    if (root == NULL) return false;
    return dfs(root, head) || isSubPath(head, root->left) || isSubPath(head, root->right);
}

void L1367_isSubPath::test() {
    vector<int> v1 = {4, 2, 8};
    ListNode* head = create_list(v1);
    vector<int> v2 = {1,4,4,-1,2,2,-1,1,-1,6,8,-1,-1,-1,-1,1,3};
    TreeNode* root = create_treenode(v2, true);
    cout << isSubPath(head, root) << endl;
    v1 = {1, 4, 2, 6};
    head = create_list(v1);
    v2 = {1,4,4,-1,2,2,-1,1,-1,6,8,-1,-1,-1,-1,1,3};
    root = create_treenode(v2, true);
    cout << isSubPath(head, root) << endl;
    v1 = {1, 4, 2, 6, 8};
    head = create_list(v1);
    v2 = {1,4,4,-1,2,2,-1,1,-1,6,8,-1,-1,-1,-1,1,3};
    root = create_treenode(v2, true);
    cout << isSubPath(head, root) << endl;
}