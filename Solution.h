#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    int trailingZeroes(int n) {
        int num5 = 0;
        while (n)
        {
            n /= 5;
            num5 += n;
        }
        return num5;
    }
};