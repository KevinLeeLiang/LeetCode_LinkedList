//
// Created by garen_lee on 2025/2/13.
/**
  ******************************************************************************
  * @file           : L24_swapPairs.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/13
  ******************************************************************************
  */
//

#include "L24_swapPairs.h"

ListNode* L24_swapPairs::swapPairs(ListNode* head) {
    if(head == nullptr || head->next == nullptr)
        return head;
    ListNode* next = head->next;
    head->next = swapPairs(next->next);
    next->next = head;
    return next;
}
void L24_swapPairs::test(){
    vector<int> nums = {1,2,3,4};
    ListNode* head = create_list(nums);
    ListNode* res  = swapPairs(head);
    print_list(res);
    nums = {1};
    head = create_list(nums);
    res  = swapPairs(head);
    print_list(res);
    nums = {};
    head = create_list(nums);
    res  = swapPairs(head);
    print_list(res);
}