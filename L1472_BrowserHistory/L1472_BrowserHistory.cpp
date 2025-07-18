//
// Created by garen_lee on 2025/7/18.
/**
  ******************************************************************************
  * @file           : L1472_BrowserHistory.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/18
  ******************************************************************************
  */
//

#include "L1472_BrowserHistory.h"
class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        this->urls.push_back(homepage);
        this->currIndex = 0;
    }

    void visit(string url) {
        while (this->currIndex < this->urls.size() - 1) {
            this->urls.pop_back();
        }
        this->urls.push_back(url);
        this->currIndex++;
    }

    string back(int steps) {
        currIndex = max(0, this->currIndex - steps);
        return this->urls[this->currIndex];
    }

    string forward(int steps) {
        currIndex = min(currIndex + steps, int(urls.size() - 1));
        return urls[currIndex];
    }
private:
    vector<string> urls;
    int currIndex;
};

void L1472_BrowserHistory::test() {
    BrowserHistory* obj = new BrowserHistory("leetcode.com");
    obj->visit("google.com");
    obj->visit("facebook.com");
    obj->visit("youtube.com");
    cout << obj->back(1) << endl;
    cout << obj->back(1) << endl;
    cout << obj->forward(1) << endl;
    obj->visit("linkedin.com");
    cout << obj->forward(2) << endl;
    cout << obj->back(2) << endl;
    cout << obj->back(7) << endl;
}