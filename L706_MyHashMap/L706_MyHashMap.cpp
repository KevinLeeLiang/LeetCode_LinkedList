//
// Created by garen_lee on 2025/6/6.
/**
  ******************************************************************************
  * @file           : L706_MyHashMap.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/6
  ******************************************************************************
  */
//

#include "L706_MyHashMap.h"

class MyHashMap {
private:
    vector<list<pair<int, int>>>data;
    static const int base = 769;
    static int hash(int key) {
        return key % base;
    }
public:
    MyHashMap() : data(base) {

    }
    void put(int key, int value) {
        int h = hash(key);
        for (auto it = data[h].begin(); it != data[h].end(); it++) {
            if (it->first == key) {
                it->second = value;
                return;
            }
        }
        data[h].push_back(make_pair(key, value));
    }
    int get(int key) {
        int h = hash(key);
        for (auto it = data[h].begin(); it != data[h].end(); it++) {
            if ((*it).first == key) {
                return (*it).second;
            }
        }
        return -1;
    }
    void remove(int key) {
        int h = hash(key);
        for (auto it = data[h].begin(); it != data[h].end(); it++) {
            if ((*it).first == key) {
                data[h].erase(it);
                return;
            }
        }
    }

};

void L706_MyHashMap::test() {
    MyHashMap hashMap;
    hashMap.put(1, 1);
    hashMap.put(2, 2);
    cout << hashMap.get(1) << endl;
    cout << hashMap.get(3) << endl;
    hashMap.put(2, 1);
    cout << hashMap.get(2) << endl;
    hashMap.remove(2);
    cout << hashMap.get(2) << endl;
}