//
// Created by garen_lee on 2025/2/28.
/**
  ******************************************************************************
  * @file           : L83_deleteDuplicates.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/28
  ******************************************************************************
  */
//

#include "L83_deleteDuplicates.h"
ListNode* L83_deleteDuplicates::deleteDuplicates(ListNode* head) {
    if(head == nullptr) return head;
    ListNode* cur = head;
    while (cur->next != nullptr){
        if (cur->val == cur->next->val){
            ListNode* tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
        }else{
            cur = cur->next;
        }
    }
    return head;
}

void L83_deleteDuplicates::test(){
    vector<int>nums = {1,1,2};
    ListNode *head = create_list(nums);
    ListNode* res = deleteDuplicates(head);
    print_list(res);
    nums = {1,1,2,3,3};
    head = create_list(nums);
    res = deleteDuplicates(head);
    print_list(res);
}