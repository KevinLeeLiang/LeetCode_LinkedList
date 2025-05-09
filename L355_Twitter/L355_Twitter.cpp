//
// Created by garen_lee on 2025/5/9.
/**
  ******************************************************************************
  * @file           : L355_Twitter.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/9
  ******************************************************************************
  */
//

#include "L355_Twitter.h"
using namespace L355;

void L355_Twitter::test() {
    Twitter twitter;
    twitter.postTweet(1, 5);
    vector<int> res = twitter.getNewsFeed(1);
    print_vector(res);
    twitter.follow(1, 2);
    twitter.postTweet(2, 6);
    res = twitter.getNewsFeed(1);
    print_vector(res);
    twitter.unfollow(1, 2);
    res = twitter.getNewsFeed(1);
    print_vector(res);
}