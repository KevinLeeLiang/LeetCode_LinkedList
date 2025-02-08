//
// Created by garen_lee on 2025/2/8.
/**
  ******************************************************************************
  * @file           : L23_mergeKLists.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/8
  ******************************************************************************
  */
//

#include "L23_mergeKLists.h"
ListNode* L23_mergeKLists::mergeTwoLists(ListNode *a, ListNode *b) {
    if ((!a) || (!b)) return a ? a : b;
    ListNode head, *tail = &head, *aPtr = a, *bPtr = b;
    while (aPtr && bPtr) {
        if (aPtr->val < bPtr->val) {
            tail->next = aPtr; aPtr = aPtr->next;
        } else {
            tail->next = bPtr; bPtr = bPtr->next;
        }
        tail = tail->next;
    }
    tail->next = (aPtr ? aPtr : bPtr);
    return head.next;
}

ListNode* L23_mergeKLists::merge(vector <ListNode*> &lists, int l, int r) {
    if (l == r) return lists[l];
    if (l > r) return nullptr;
    int mid = (l + r) >> 1;
    return mergeTwoLists(merge(lists, l, mid), merge(lists, mid + 1, r));
}

ListNode* L23_mergeKLists::mergeKLists(vector<ListNode *> &lists) {
    return merge(lists, 0, lists.size() - 1);
}
void L23_mergeKLists::test(){
    vector<vector<int>> lists = {{1,4,5},{1,3,4},{2,6}};
    vector<ListNode *> list_nodes;
    for(auto list : lists){
        list_nodes.push_back(create_list(list));
    }
    print_list(mergeKLists(list_nodes));
    lists = {{}};
    list_nodes.clear();
    for(auto list : lists){
        list_nodes.push_back(create_list(list));
    }
    print_list(mergeKLists(list_nodes));
    lists = {};
    list_nodes.clear();
    for(auto list : lists){
        list_nodes.push_back(create_list(list));
    }
    print_list(mergeKLists(list_nodes));
}