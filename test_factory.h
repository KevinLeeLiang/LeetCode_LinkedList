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
#include "L141_hasCycle/L141_hasCycle.h"
#include "L142_detectCycle/L142_detectCycle.h"
#include "L143_reorderList/L143_reorderList.h"
#include "L146_LRUCache/L146_LRUCache.h"
#include "L147_insertionSortList/L147_insertSortList.h"
#include "L148_sortList//L148_sortList.h"
#include "L160_getIntersectionNode/L160_getIntersectionNode.h"
#include "L203_removeElements/L203_removeElements.h"
#include "L206_reverseList/L206_reverseList.h"
#include "L234_isPalindrome/L234_isPalindrome.h"
#include "L237_deleteNode/L237_deleteNode.h"
#include "L328_oddEvenList/L328_oddEvenList.h"
#include "L355_Twitter/L355_Twitter.h"
#include "L382_getRandom/L382_getRandom.h"
#include "L432_allOne/L432_allOne.h"
#include "L445_addTwoNumbers/L445_addTwoNumbers.h"
#include "L460_LFUCache/L460_LFUCache.h"
#include "L622_myCircularQueue/L622_myCircularQueue.h"
#include "L641_myCircularDeque/L641_myCircularDeque.h"
#include "L705_MyHashSet/L705_MyHashSet.h"
#include "L706_MyHashMap/L706_MyHashMap.h"
#include "L707_MyLinkedList/L707_MyLinkedList.h"
#include "L725_splitListToParts/L725_splitListToParts.h"
#include "L817_numComponents/L817_numComponents.h"
#include "L876_middleNode/L876_middleNode.h"
#include "L1019_nextLargerNodes/L1019_nextLargerNodes.h"
#include "L1171_removeZeroSumSublists/L1171_removeZeroSumSublists.h"
#include "L1206_Skiplist/L1206_Skiplist.h"
#include "L1290_getDecimalValue/L1290_getDecimalValue.h"
#include "L1367_isSubPath/L1367_isSubPath.h"
#include "L1472_BrowserHistory/L1472_BrowserHistory.h"
#include "L1669_mergeInBetween/L1669_mergeInBetween.h"

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
        } else if (title == "L141") {
            std::shared_ptr<L141_hasCycle> tmp= std::make_shared<L141_hasCycle>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L142") {
            std::shared_ptr<L142_detectCycle> tmp= std::make_shared<L142_detectCycle>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L143") {
            std::shared_ptr<L143_reorderList> tmp= std::make_shared<L143_reorderList>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L146") {
            std::shared_ptr<L146_LRUCache> tmp= std::make_shared<L146_LRUCache>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L147") {
            std::shared_ptr<L147_insertSortList> tmp= std::make_shared<L147_insertSortList>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L148") {
            std::shared_ptr<L148_sortList> tmp= std::make_shared<L148_sortList>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L160") {
            std::shared_ptr<L160_getIntersectionNode> tmp= std::make_shared<L160_getIntersectionNode>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L203") {
            std::shared_ptr<L203_removeElements> tmp= std::make_shared<L203_removeElements>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L206") {
            std::shared_ptr<L206_reverseList> tmp= std::make_shared<L206_reverseList>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L234") {
            std::shared_ptr<L234_isPalindrome> tmp= std::make_shared<L234_isPalindrome>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L237") {
            std::shared_ptr<L237_deleteNode> tmp= std::make_shared<L237_deleteNode>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L328") {
            std::shared_ptr<L328_oddEvenList> tmp= std::make_shared<L328_oddEvenList>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L355") {
            std::shared_ptr<L355_Twitter> tmp= std::make_shared<L355_Twitter>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L382") {
            std::shared_ptr<L382_getRandom> tmp= std::make_shared<L382_getRandom>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L432") {
            std::shared_ptr<L432_allOne> tmp = std::make_shared<L432_allOne>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L445") {
            std::shared_ptr<L445_addTwoNumbers> tmp = std::make_shared<L445_addTwoNumbers>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L460") {
            std::shared_ptr<L460_LFUCache> tmp = std::make_shared<L460_LFUCache>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L622") {
            std::shared_ptr<L622_myCircularQueue> tmp = std::make_shared<L622_myCircularQueue>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L641") {
            std::shared_ptr<L641_myCircularDeque> tmp = std::make_shared<L641_myCircularDeque>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L705") {
            std::shared_ptr<L705_MyHashSet> tmp = std::make_shared<L705_MyHashSet>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L706") {
            std::shared_ptr<L706_MyHashMap> tmp = std::make_shared<L706_MyHashMap>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L707") {
            std::shared_ptr<L707_MyLinkedList> tmp = std::make_shared<L707_MyLinkedList>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L725") {
            std::shared_ptr<L725_splitListToParts> tmp = std::make_shared<L725_splitListToParts>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L817") {
            std::shared_ptr<L817_numComponents> tmp = std::make_shared<L817_numComponents>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L876") {
            std::shared_ptr<L876_middleNode> tmp = std::make_shared<L876_middleNode>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L1019") {
            std::shared_ptr<L1019_nextLargerNodes> tmp = std::make_shared<L1019_nextLargerNodes>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L1171") {
            std::shared_ptr<L1171_removeZeroSumSublists> tmp = std::make_shared<L1171_removeZeroSumSublists>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L1206") {
            std::shared_ptr<L1206_Skiplist> tmp = std::make_shared<L1206_Skiplist>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L1290") {
            std::shared_ptr<L1290_getDecimalValue> tmp = std::make_shared<L1290_getDecimalValue>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L1367") {
            std::shared_ptr<L1367_isSubPath> tmp = std::make_shared<L1367_isSubPath>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L1472") {
            std::shared_ptr<L1472_BrowserHistory> tmp = std::make_shared<L1472_BrowserHistory>();
            solution_ = std::dynamic_pointer_cast<LeetcodeLinkedList>(tmp);
        } else if (title == "L1669") {
            std::shared_ptr<L1669_mergeInBetween> tmp = std::make_shared<L1669_mergeInBetween>();
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
