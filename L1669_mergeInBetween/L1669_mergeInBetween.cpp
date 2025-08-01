//
// Created by garen_lee on 2025/8/1.
/**
  ******************************************************************************
  * @file           : L1669_mergeInBetween.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/1
  ******************************************************************************
  */
//

#include "L1669_mergeInBetween.h"

ListNode *L1669_mergeInBetween::mergeInBetween(ListNode *list1, int a, int b, ListNode *list2) {
    ListNode* preA = list1;
    for (int i = 0; i < a - 1; ++i) {
        preA = preA->next;
    }
    ListNode* preB = preA;
    for (int i = 0; i < b - a + 2; ++i) {
        preB = preB->next;
    }
    preA->next = list2;
    while (list2->next) {
        list2 = list2->next;
    }
    list2->next = preB;
    return list1;
}

void L1669_mergeInBetween::test() {
    vector<int> vec1 = {10,1,13,6,9,5};
    ListNode* list1 = create_list(vec1);
    int a = 3, b = 4;
    vector<int> vec2 = {1000000,1000001,1000002};
    ListNode* list2 = create_list(vec2);
    ListNode* res = mergeInBetween(list1, a, b, list2);
    print_list(res);
    vec1 = {0,1,2,3,4,5,6};
    a = 2, b = 5;
    vec2 = {1000000,1000001,1000002,1000003,1000004};
    list1 = create_list(vec1);
    list2 = create_list(vec2);
    res = mergeInBetween(list1, a, b, list2);
    print_list(res);
}