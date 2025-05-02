//
// Created by garen-lee on 2025/5/2.
/**
  ******************************************************************************
  * @file           : L328_oddEvenList.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/2
  ******************************************************************************
  */
//

#include "L328_oddEvenList.h"

ListNode* L328_oddEvenList::oddEvenList(ListNode* head) {
    if (head == nullptr) {
        return head;
    }
    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;
    while (even != nullptr && even->next != nullptr) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;;
}

void L328_oddEvenList::test() {
    vector<int> nums = {1, 2, 3, 4, 5};
    ListNode* head = create_list(nums);
    ListNode* res = oddEvenList(head);
    print_list(res);
    nums = {2,1,3,5,6,4,7};
    head = create_list(nums);
    res = oddEvenList(head);
    print_list(res);
}