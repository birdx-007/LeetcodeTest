#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map1[128];
        int map2[128];
        memset(&map1, -1, sizeof(map1));
        memset(&map2, -1, sizeof(map2));
        for (int i = 0; i < (int)s.length(); i++) {
            if (map1[s[i]] == -1 && map2[t[i]] == -1) {
                map1[s[i]] = t[i];
                map2[t[i]] = s[i];
            }
            else if (map1[s[i]] != t[i] || map2[t[i]] != s[i]) {
                return false;
            }
        }
        return true;
    }
};