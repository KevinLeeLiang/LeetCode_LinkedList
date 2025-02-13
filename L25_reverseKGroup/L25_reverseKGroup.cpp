//
// Created by garen_lee on 2025/2/13.
/**
  ******************************************************************************
  * @file           : L25_reverseKGroup.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/13
  ******************************************************************************
  */
//

#include "L25_reverseKGroup.h"
pair<ListNode*, ListNode*> L25_reverseKGroup::reverse(ListNode* head, ListNode* tail) {
    ListNode* pre = tail->next;
    ListNode* cur = head;
    while (cur != tail) {
        ListNode* nex = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nex;
    }
    return {tail, head};
}
ListNode* L25_reverseKGroup::reverseKGroup(ListNode* head, int k) {
    ListNode* hair = new ListNode(-1);
    hair->next = head;
    ListNode* pre = hair;
    while (head) {
        ListNode* tail = pre;
        for (int i = 0; i < k; ++i) {
            tail = tail->next;
            if (!tail) {
                return hair->next;
            }
        }
        ListNode* nex = tail->next;
        tie(head, tail) = reverse(head, tail);
        pre->next = head;
        tail->next = nex;
        pre = tail;
        head = tail->next;
    }
    return hair->next;
}

void L25_reverseKGroup::test() {
    vector<int>nums = {1,2,3,4,5};
    int k = 2;
    ListNode* head = create_list(nums);
    ListNode* res = reverseKGroup(head, k);
    print_list(res);
    nums = {1,2,3,4,5};
    k = 3;
    head = create_list(nums);
    res = reverseKGroup(head, k);
    print_list(res);

}