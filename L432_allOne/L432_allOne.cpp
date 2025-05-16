//
// Created by garen_lee on 2025/5/16.
/**
  ******************************************************************************
  * @file           : L432_allOne.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/16
  ******************************************************************************
  */
//

#include "L432_allOne.h"
using namespace L432;



void L432_allOne::test() {
    AllOne allone;
    allone.inc("hello");
    allone.inc("hello");
    cout << allone.getMaxKey() << endl;
    cout << allone.getMinKey() << endl;
    allone.inc("leet");
    cout << allone.getMaxKey() << endl;
    cout << allone.getMinKey() << endl;
}