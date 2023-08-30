#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <utility>
#include <algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 1) {
            return strs[0];
        }
        int j = -1;
        bool flag;
        do {
            flag = true;
            char c;
            for (int i = 0; i < n; i++) {
                string s = strs[i];
                if (s.length() == 0) {
                    return "";
                }
                if (s.length() <= j + 1) {
                    flag = false;
                    break;
                }
                if (i == 0) {
                    c = s[j + 1];
                }
                else {
                    if (c != s[j + 1]) {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag) {
                j++;
            }
        } while (flag);
        if (j == -1) {
            return "";
        }
        else {
            return strs[0].substr(0, j + 1);
        }
    }
};