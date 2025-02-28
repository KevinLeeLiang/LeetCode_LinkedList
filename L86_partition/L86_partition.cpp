//
// Created by garen_lee on 2025/2/28.
/**
  ******************************************************************************
  * @file           : L86_partition.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/28
  ******************************************************************************
  */
//

#include "L86_partition.h"

ListNode* L86_partition::partition(ListNode* head, int x) {
    if (!head)
        return nullptr;
    vector<ListNode*>less, more;
    while(head){
        if(head->val < x){
            less.push_back(head);
        }else{
            more.push_back(head);
        }
        head = head->next;
    }
    if (less.size() == 0)
        return more[0];
    for(int i = 0; i < less.size() - 1; i++){
        less[i]->next = less[i + 1];
    }
    if (more.size() == 0)
        return less[0];
    less[less.size() - 1]->next = more[0];
    for (int i = 0; i < more.size() - 1; i++){
        more[i]->next = more[i + 1];
    }
    more[more.size() - 1]->next = nullptr;
    return less[0];
}

void L86_partition::test(){
    vector<int>nums = {1,4,3,2,5,2};
    int x = 3;
    ListNode* head = create_list(nums);
    ListNode* res = partition(head, x);
    print_list(res);
    nums = {2,1};
    x = 2;
    head = create_list(nums);
    res = partition(head, x);
    print_list(res);
}