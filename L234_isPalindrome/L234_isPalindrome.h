//
// Created by garen_lee on 2025/4/25.
/**
  ******************************************************************************
  * @file           : L234_isPalindrome.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/25
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L234_ISPALINDROME_H
#define L146_LRUCACHE_CPP_L234_ISPALINDROME_H

#include "util.h"
class L234_isPalindrome : public LeetcodeLinkedList {
private:
    bool isPalindrome(ListNode* head);
    bool recursivelyCheck(ListNode* currentNode);
    ListNode* frontPointer_;
public:
    L234_isPalindrome() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L234_ISPALINDROME_H
