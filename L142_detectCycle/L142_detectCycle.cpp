//
// Created by garen_lee on 2025/3/28.
/**
  ******************************************************************************
  * @file           : L142_detectCycle.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/28
  ******************************************************************************
  */
//

#include "L142_detectCycle.h"

ListNode* L142_detectCycle::detectCycle(ListNode *head) {
    unordered_set<ListNode *> visited;
    while (head != nullptr) {
        if (visited.find(head) != visited.end()) {
            return head;
        }
        visited.insert(head);
        head = head->next;
    }
    return nullptr;
}

void print_res(ListNode* res) {
    if (res == nullptr)
        cout << "null" << endl;
    else
        cout << res->val << endl;
}

void L142_detectCycle::test() {
    vector<int> list_vals = {3, 2, 0, -4};
    int pos = 1;
    ListNode *head = createLinkNode(list_vals, pos);
    ListNode *res = detectCycle(head);
    print_res(res);
    list_vals = {1, 2};
    pos = 0;
    head = createLinkNode(list_vals, pos);
    res = detectCycle(head);
    print_res(res);
    list_vals = {1};
    pos = -1;
    head = createLinkNode(list_vals, pos);
    res = detectCycle(head);
    print_res(res);
}