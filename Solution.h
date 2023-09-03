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
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) {
            return false;
        }
        int m[26] = { 0 };
        for (char c : magazine) {
            m[c - 'a']++;
        }
        for (char c : ransomNote) {
            if (m[c - 'a'] == 0) {
                return false;
            }
            m[c - 'a']--;
        }
        return true;
    }
};