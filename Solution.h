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
    int rob(vector<int>& nums) {
        int a = 0, b = nums[0], c = nums[0];
        for (int i = 1; i < (int)nums.size(); i++) {
            c = max(b, a + nums[i]);
            a = b;
            b = c;
        }
        return c;
    }
};