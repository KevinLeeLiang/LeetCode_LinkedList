//
// Created by garen_lee on 2025/5/23.
/**
  ******************************************************************************
  * @file           : L460_LFUCache.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/23
  ******************************************************************************
  */
//

#include "L460_LFUCache.h"
using namespace L460;

int LFUCache::get(int key) {
    if (capacity == 0) return -1;
    auto it = key_table.find(key);
    // 如果哈希表中没有键 key，返回 -1
    if (it == key_table.end()) return -1;
    // 从哈希表中得到旧的缓存
    Node cache = it -> second;
    // 从平衡二叉树中删除旧的缓存
    S.erase(cache);
    // 将旧缓存更新
    cache.cnt += 1;
    cache.time = ++time;
    // 将新缓存重新放入哈希表和平衡二叉树中
    S.insert(cache);
    it -> second = cache;
    return cache.value;
}

void LFUCache::put(int key, int value) {
    if (capacity == 0) return;
    auto it = key_table.find(key);
    if (it == key_table.end()) {
        // 如果到达缓存容量上限
        if (key_table.size() == capacity) {
            // 从哈希表和平衡二叉树中删除最近最少使用的缓存
            key_table.erase(S.begin() -> key);
            S.erase(S.begin());
        }
        // 创建新的缓存
        Node cache = Node(1, ++time, key, value);
        // 将新缓存放入哈希表和平衡二叉树中
        key_table.insert(make_pair(key, cache));
        S.insert(cache);
    }
    else {
        // 这里和 get() 函数类似
        Node cache = it -> second;
        S.erase(cache);
        cache.cnt += 1;
        cache.time = ++time;
        cache.value = value;
        S.insert(cache);
        it -> second = cache;
    }
}

void L460_LFUCache::test() {
    LFUCache obj(2);
    obj.put(1, 1);
    obj.put(2, 2);
    cout << obj.get(1) << endl;
    obj.put(3, 3);
    cout << obj.get(2) << endl;
    cout << obj.get(3) << endl;
    obj.put(4, 4);
    cout << obj.get(1) << endl;
    cout << obj.get(3) << endl;
    cout << obj.get(4) << endl;
}