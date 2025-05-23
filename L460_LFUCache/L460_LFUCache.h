//
// Created by garen_lee on 2025/5/23.
/**
  ******************************************************************************
  * @file           : L460_LFUCache.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/23
  ******************************************************************************
  */
//

#ifndef L146_LRUCACHE_CPP_L460_LFUCACHE_H
#define L146_LRUCACHE_CPP_L460_LFUCACHE_H

#include "util.h"
namespace L460 {
    struct Node {
        int cnt, time, key, value;
        Node(int _cnt, int _time, int _key, int _value):cnt(_cnt), time(_time), key(_key), value(_value){}

        bool operator < (const Node& rhs) const {
            return cnt == rhs.cnt ? time < rhs.time : cnt < rhs.cnt;
        }
    };
    class LFUCache {
    public:
        LFUCache(int capacity) {
            this->capacity = capacity;
            this->time = 0;
            this->key_table.clear();
            this->S.clear();
        }
        int get(int key);
        void put(int key, int value);
    private:
        int capacity, time;
        unordered_map<int, Node> key_table;
        set<Node>S;
    };
}

class L460_LFUCache : public LeetcodeLinkedList {
public:
    L460_LFUCache() {}
    void test();
};


#endif //L146_LRUCACHE_CPP_L460_LFUCACHE_H
