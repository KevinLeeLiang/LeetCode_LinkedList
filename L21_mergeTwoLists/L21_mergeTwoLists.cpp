//
// Created by garen_lee on 2025/2/8.
/**
  ******************************************************************************
  * @file           : L21_mergeTwoLists.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/8
  ******************************************************************************
  */
//

#include "L21_mergeTwoLists.h"

ListNode* L21_mergeTwoLists::mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr) {
        return l2;
    }
    if (l2 == nullptr) {
        return l1;
    }
    if (l1->val < l2->val) {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}

void L21_mergeTwoLists::test() {
    vector<int>v1, v2;
    v1 = {1, 2, 4};
    v2 = {1, 3, 4};
    ListNode* l1, *l2, *res;
    l1 = create_list(v1);
    l2 = create_list(v2);
    res = mergeTwoLists(l1, l2);
    print_list(res);
    v1 = {};
    v2 = {0};
    l1 = create_list(v1);
    l2 = create_list(v2);
    res = mergeTwoLists(l1, l2);
    print_list(res);
    v1 = {1};
    v2 = {};
    l1 = create_list(v1);
    l2 = create_list(v2);
    res = mergeTwoLists(l1, l2);
    print_list(res);
    delete_list(l1);
    delete_list(l2);
}