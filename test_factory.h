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
