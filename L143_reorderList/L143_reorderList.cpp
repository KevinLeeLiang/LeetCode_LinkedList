//
// Created by garen-lee on 2025/4/4.
/**
  ******************************************************************************
  * @file           : L143_reorderList.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/4
  ******************************************************************************
  */
//

#include "L143_reorderList.h"

void L143_reorderList::reorderList(ListNode* head) {
    if (head == nullptr) {
        return;
    }
    if (head->next == nullptr) {
        return;
    }
    stack<ListNode*> s;
    ListNode* temp = head;
    while (temp) {
        s.push(temp);
        temp = temp->next;
    }
    temp = head;
    int size = s.size();
    while (!s.empty() && size > 0) {
        ListNode* next = temp->next;
        temp->next = s.top();
        s.pop();
        temp->next->next = next;
        temp = temp->next->next;
        size -= 2;
    }
    temp->next = nullptr;
}

void L143_reorderList::test() {
    vector<int> v = {1, 2, 3, 4};
    ListNode* head = create_list(v);
    reorderList(head);
    print_list(head);
    v = {1, 2, 3, 4, 5};
    head = create_list(v);
    reorderList(head);
    print_list(head);
}