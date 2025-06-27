//
// Created by garen_lee on 2025/6/27.
/**
  ******************************************************************************
  * @file           : L1019_nextLargerNodes.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/27
  ******************************************************************************
  */
//

#include "L1019_nextLargerNodes.h"

vector<int> L1019_nextLargerNodes::nextLargerNodes(ListNode* head) {
    vector<int>res;
    if (!head) {
        return res;
    }
    stack<pair<int, int>>s;
    while (head) {
        while (!s.empty() && s.top().first < head->val) {
            res[s.top().second] = head->val;
            s.pop();
        }
        s.push(make_pair(head->val, res.size()));
        res.push_back(0);
        head = head->next;
    }
    return res;
}

void L1019_nextLargerNodes::test() {
    vector<int> vec = {2,1,5};
    ListNode* head = create_list( vec);
    vector<int> res = nextLargerNodes(head);
    print_vector(res);
    vec = {2,7,4,3,5};
    head = create_list( vec);
    res = nextLargerNodes(head);
    print_vector(res);
}