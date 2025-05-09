//
// Created by garen_lee on 2025/5/9.
/**
  ******************************************************************************
  * @file           : L382_getRandom.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/9
  ******************************************************************************
  */
//

#include "L382_getRandom.h"
using namespace L382;
void L382_getRandom::test() {
    vector<int> vals = {1,2,3};
    ListNode* head = create_list(vals);
    Solution sol(head);
    cout << sol.getRandom() << endl;
    cout << sol.getRandom() << endl;
    cout << sol.getRandom() << endl;
    cout << sol.getRandom() << endl;
    cout << sol.getRandom() << endl;
}