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
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        int leftMul = 1;
        int rightMul = 1;
        for (int i = 0; i < n; i++) {
            res[i] *= leftMul;
            res[n - 1 - i] *= rightMul;
            leftMul *= nums[i];
            rightMul *= nums[n - 1 - i];
        }
        return res;
    }
};