//
// Created by garen_lee on 2025/3/28.
/**
  ******************************************************************************
  * @file           : L141_hasCycle.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/28
  ******************************************************************************
  */
//

#include "L141_hasCycle.h"
namespace L141 {
    ListNode* createLinkNode(vector<int> list_vals, int pos) {
        if (list_vals.size() == 0)
            return nullptr;
        ListNode *head = new ListNode(list_vals[0]);
        ListNode *p = head;
        ListNode *q;
        if (pos == 0) {
            q = p;
        }
        for (int i = 1; i < list_vals.size(); ++i) {
            p->next = new ListNode(list_vals[i]);
            if (i == pos) {
                q = p;
            }
            p = p->next;
            if (i == list_vals.size() - 1) {
                p->next = nullptr;
            }
        }
        if (pos != -1) {
            p->next = q;
        }
        return head;
    };
}
bool L141_hasCycle::hasCycle(ListNode *head) {
    unordered_map<ListNode *, int> map;
    while (head != nullptr) {
        if (map.find(head) != map.end()) {
            return true;
        }
        map[head] = 1;
        head = head->next;
    }
    return false;
}

void L141_hasCycle::test() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int pos = 1;
    ListNode *head = L141::createLinkNode(nums, pos);
    cout << hasCycle(head) << endl;
    nums = {1,2};
    pos = 0;
    head = L141::createLinkNode(nums, pos);
    cout << hasCycle(head) << endl;
    nums = {1};
    pos = -1;
    head = L141::createLinkNode(nums, pos);
    cout << hasCycle(head) << endl;
}