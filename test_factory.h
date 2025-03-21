//
// Created by garen-lee on 2025/2/4.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/4
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_TEST_FACTORY_H
#define LINKEDLIST_TEST_FACTORY_H
#include <memory>
#include "L2_addTwoNumbers/L2_addTwoNumbers.h"
#include "L19_removeNthFromEnd/L19_removeNthFromEnd.h"
#include "L21_mergeTwoLists/L21_mergeTwoLists.h"
#include "L23_mergeKLists/L23_mergeKLists.h"
#include "L24_swapPairs/L24_swapPairs.h"
#include "L25_reverseKGroup/L25_reverseKGroup.h"
#include "L61_rotateRight/L61_rotateRight.h"
#include "L82_deleteDuplicates/L82_deleteDuplicates.h"
#include "L83_deleteDuplicates/L83_deleteDuplicates.h"
#include "L86_partition/L86_partition.h"
#include "L92_reverseBetween/L92_reverseBetween.h"
#include "L109_sortedListToBST/L109_sortedListToBST.h"
#include "L114_flatten/L114_flatten.h"
#include "L116_connect/L116_connect.h"
#include "L117_connect/L117_connect.h"

class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L2") {
            std::shared_ptr<L2_addTwoNumbers> tmp= std::make_shared<L2_addTwoNumbers>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L19") {
            std::shared_ptr<L19_removeNthFromEnd> tmp= std::make_shared<L19_removeNthFromEnd>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L21") {
            std::shared_ptr<L21_mergeTwoLists> tmp= std::make_shared<L21_mergeTwoLists>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L23") {
            std::shared_ptr<L23_mergeKLists> tmp= std::make_shared<L23_mergeKLists>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L24") {
            std::shared_ptr<L24_swapPairs> tmp= std::make_shared<L24_swapPairs>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L25") {
            std::shared_ptr<L25_reverseKGroup> tmp= std::make_shared<L25_reverseKGroup>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L61") {
            std::shared_ptr<L61_rotateRight> tmp= std::make_shared<L61_rotateRight>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L82") {
            std::shared_ptr<L82_deleteDuplicates> tmp= std::make_shared<L82_deleteDuplicates>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L83") {
            std::shared_ptr<L83_deleteDuplicates> tmp= std::make_shared<L83_deleteDuplicates>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L86") {
            std::shared_ptr<L86_partition> tmp= std::make_shared<L86_partition>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L92") {
            std::shared_ptr<L92_reverseBetween> tmp= std::make_shared<L92_reverseBetween>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L109") {
            std::shared_ptr<L109_sortedListToBST> tmp= std::make_shared<L109_sortedListToBST>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L114") {
            std::shared_ptr<L114_flatten> tmp= std::make_shared<L114_flatten>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L116") {
            std::shared_ptr<L116_connect> tmp= std::make_shared<L116_connect>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L117") {
            std::shared_ptr<L117_connect> tmp= std::make_shared<L117_connect>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeLinkedList> solution_;
};
#endif //LINKEDLIST_TEST_FACTORY_H
