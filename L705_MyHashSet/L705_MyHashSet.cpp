//
// Created by garen_lee on 2025/6/6.
/**
  ******************************************************************************
  * @file           : L705_MyHashSet.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/6
  ******************************************************************************
  */
//

#include "L705_MyHashSet.h"

class MyHashSet {
private:
private:
    vector<list<int>>data;
    static const int base = 769;
    static int hash(int key) {
        return key % base;
    }
public:
    MyHashSet() : data(base){

    }

    void add(int key) {
        int h = hash(key);
        for (auto it = data[h].begin(); it != data[h].end(); it++) {
            if ((*it) == key) {
                return ;
            }
        }
        data[h].push_back(key);
    }

    void remove(int key) {
        int h = hash(key);
        for (auto it = data[h].begin(); it != data[h].end(); ++it) {
            if ((*it) == key) {
                data[h].erase(it);
                return ;
            }
        }
    }

    bool contains(int key) {
        int h = hash(key);
        for (auto it = data[h].begin(); it != data[h].end(); ++it) {
            if ((*it) == key) {
                return true;
            }
        }
        return false;
    }
};

void L705_MyHashSet::test() {
    MyHashSet hashSet;
    hashSet.add(1);
    hashSet.add(2);
    cout << hashSet.contains(1) << endl;
    cout << hashSet.contains(3) << endl;
    hashSet.add(2);
    cout << hashSet.contains(2) << endl;
    hashSet.remove(2);
    cout << hashSet.contains(2) << endl;
}