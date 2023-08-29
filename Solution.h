#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target <= nums[0]) {
            return 0;
        }
        if (target > nums[(int)nums.size() - 1]) {
            return (int)nums.size();
        }
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int m = l + ((r - l) >> 1);
            if (nums[m] < target) {
                l = m + 1;
            }
            else if (nums[m] > target) {
                r = m - 1;
            }
            else {
                return m;
            }
        }
        return l;
    }
};