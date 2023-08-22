#pragma once
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0;
        int res = 0;
        unordered_set<char> charSet;
        while (end < s.length()) {
            if (charSet.count(s[end])==0) {
                res = max(res, end - start + 1);
                charSet.insert(s[end]);
                end++;
            }
            else {
                charSet.erase(s[start]);
                start++;
            }
        }
        return res;
    }
};