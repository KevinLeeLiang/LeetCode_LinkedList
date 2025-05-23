//
// Created by garen_lee on 2025/5/23.
/**
  ******************************************************************************
  * @file           : L445_addTwoNumbers.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/23
  ******************************************************************************
  */
//

#include "L445_addTwoNumbers.h"

ListNode *L445_addTwoNumbers::addTwoNumbers(ListNode *l1, ListNode *l2) {
    stack<int> s1, s2;
    while (l1) {
        s1.push(l1->val);
        l1 = l1->next;
    }
    while (l2) {
        s2.push(l2->val);
        l2 = l2->next;
    }
    int carry = 0;
    ListNode* ans = nullptr;
    while (!s1.empty() || !s2.empty() || carry) {
        int a = s1.empty() ? 0 : s1.top();
        int b = s2.empty() ? 0 : s2.top();
        if (!s1.empty()) s1.pop();
        if (!s2.empty()) s2.pop();
        int cur = a + b + carry;
        carry = cur / 10;
        cur %= 10;
        auto curnode = new ListNode(cur);
        curnode -> next = ans;
        ans = curnode;
    }
    return ans;
}

void L445_addTwoNumbers::test() {
    vector<int>l1 = {7,2,4,3};
    vector<int>l2 = {5,6,4};
    ListNode *head1 = create_list(l1);
    ListNode *head2 = create_list(l2);
    ListNode *head = addTwoNumbers(head1, head2);
    print_list(head);
    l1 = {2,4,3};
    l2 = {5,6,4};
    head1 = create_list(l1);
    head2 = create_list(l2);
    head = addTwoNumbers(head1, head2);
    print_list(head);
    l1 = {0};
    l2 = {0};
    head1 = create_list(l1);
    head2 = create_list(l2);
    head = addTwoNumbers(head1, head2);
    print_list(head);
}