//
// Created by garen-lee on 2025/4/4.
/**
  ******************************************************************************
  * @file           : L146_LRUCache.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/4
  ******************************************************************************
  */
//

#ifndef LINKEDLIST_L146_LRUCACHE_H
#define LINKEDLIST_L146_LRUCACHE_H

#include "util.h"
namespace L146 {
    class LRUCache {
        typedef pair<int, int> PII;
    public:
        LRUCache(int capacity);
        int get(int key);
        void put(int key, int value);
    private:
        int capacity;
        queue<PII> que;
        unordered_map<int, int> ump;
        unordered_map<int, int> ump2;
        int id = 0;
    };

}
class L146_LRUCache : public LeetcodeLinkedList {
public:
    L146_LRUCache() {}
    void test();
};


#endif //LINKEDLIST_L146_LRUCACHE_H
