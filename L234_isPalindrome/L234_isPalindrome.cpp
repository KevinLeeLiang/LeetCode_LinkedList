//
// Created by garen_lee on 2025/4/25.
/**
  ******************************************************************************
  * @file           : L234_isPalindrome.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/25
  ******************************************************************************
  */
//

#include "L234_isPalindrome.h"

bool L234_isPalindrome::recursivelyCheck(ListNode *currentNode) {
    if (currentNode != nullptr) {
        if (!recursivelyCheck(currentNode->next)) {
            return false;
        }
        if (currentNode->val != frontPointer_->val) {
            return false;
        }
        frontPointer_ = frontPointer_->next;
    }
    return true;
}

bool L234_isPalindrome::isPalindrome(ListNode *head) {
    frontPointer_ = head;
    return recursivelyCheck(head);
}

void L234_isPalindrome::test() {
    vector<int> nums = {1, 2, 2, 1};
    ListNode *head = create_list(nums);
    bool result = isPalindrome(head);
    cout << "result: " << result << endl;
    nums = {1, 2};
    head = create_list(nums);
    result = isPalindrome(head);
    cout << "result: " << result << endl;
}