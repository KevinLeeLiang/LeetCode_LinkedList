//
// Created by garen-lee on 2025/2/4.
/**
  ******************************************************************************
  * @file           : L19_removeNthFromEnd.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/4
  ******************************************************************************
  */
//

#include "L19_removeNthFromEnd.h"
ListNode* L19_removeNthFromEnd::removeNthFromEnd(ListNode* head, int n) {
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *fast = dummy;
    ListNode *slow = dummy;
    while (n--) {
        fast = fast->next;
    }
    while (fast->next) {
        fast = fast->next;
        slow = slow->next;
    }
    ListNode *temp = slow->next;
    slow->next = temp->next;
    delete temp;
    return dummy->next;
}
void L19_removeNthFromEnd::test(){
    vector<int> list_vals = {1, 2, 3, 4, 5};
    int n = 2;
    ListNode *head = create_list(list_vals);
    ListNode *res = removeNthFromEnd(head, n);
    print_list(res);
    delete res;
    list_vals = {1};
    n = 1;
    head = create_list(list_vals);
    res = removeNthFromEnd(head, n);
    print_list(res);
    delete res;
    list_vals = {1, 2};
    n = 1;
    head = create_list(list_vals);
    res = removeNthFromEnd(head, n);
    print_list(res);
    delete res;
}