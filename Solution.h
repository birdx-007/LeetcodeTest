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
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < (int)nums.size(); i++) {
            res ^= nums[i];
        }
        return res;
    }
};