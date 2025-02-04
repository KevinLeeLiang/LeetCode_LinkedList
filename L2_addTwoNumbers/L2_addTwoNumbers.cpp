//
// Created by garen-lee on 2025/2/4.
/**
  ******************************************************************************
  * @file           : L2_addTwoNumbers.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/4
  ******************************************************************************
  */
//

#include "L2_addTwoNumbers.h"

ListNode* L2_addTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *head = nullptr, *tail = nullptr;
    int carry = 0;
    while (l1 || l2) {
        int n1 = l1 ? l1->val: 0;
        int n2 = l2 ? l2->val: 0;
        int sum = n1 + n2 + carry;
        if (!head) {
            head = tail = new ListNode(sum % 10);
        } else {
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
        }
        carry = sum / 10;
        if (l1) {
            l1 = l1->next;
        }
        if (l2) {
            l2 = l2->next;
        }
    }
    if (carry > 0) {
        tail->next = new ListNode(carry);
    }
    return head;
}
void L2_addTwoNumbers::test(){
    vector<int> list_vals1 = {2,4,3};
    vector<int> list_vals2 = {5,6,4};
    ListNode *list1 = create_list(list_vals1);
    ListNode *list2 = create_list(list_vals2);
    ListNode *res = addTwoNumbers(list1, list2);
    print_list(res);
    delete_list(list1);
    delete_list(list2);
    delete_list(res);
    list_vals1 = {0};
    list_vals2 = {0};
    list1 = create_list(list_vals1);
    list2 = create_list(list_vals2);
    res = addTwoNumbers(list1, list2);
    print_list(res);
    delete_list(list1);
    delete_list(list2);
    delete_list(res);
    list_vals1 = {9,9,9,9,9,9,9};
    list_vals2 = {9,9,9,9};
    list1 = create_list(list_vals1);
    list2 = create_list(list_vals2);
    res = addTwoNumbers(list1, list2);
    print_list(res);
    delete_list(list1);
    delete_list(list2);
    delete_list(res);
}