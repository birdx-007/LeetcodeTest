#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptrs = 0, ptrt = 0;
        while (ptrs < s.length() && ptrt < t.length()) {
            if (s[ptrs] == t[ptrt]) {
                ptrs++;
            }
            ptrt++;
        }
        return ptrs == s.length();
    }
};