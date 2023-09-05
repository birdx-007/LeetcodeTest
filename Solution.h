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
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return 0;
        }
        int cnt = 0;
        int left = 0, right = 0 + nums[0];
        while (right < n - 1) {
            cnt++;
            int i = left, j = right;
            for (left = right + 1; i <= j; i++) {
                right = max(right, i + nums[i]);
            }
        }
        return cnt + 1;
    }
};