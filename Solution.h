#pragma once
#include <vector>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s) {
        string raw = "";
        for (char c : s) {
            if (c >= 'A' && c <= 'Z') {
                raw += (char)(c - ('A' - 'a'));
            }
            else if (c >= 'a' && c <= 'z') {
                raw += c;
            }
            else if (c >= '0' && c <= '9') {
                raw += c;
            }
        }
        int l = 0, r = (int)raw.size() - 1;
        while (l < r) {
            if (raw[l] != raw[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};