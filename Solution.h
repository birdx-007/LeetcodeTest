#pragma once
#include <vector>
using namespace std;
class Solution
{
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = (int)nums.size() - 1;
        int res = 0;
        while (l <= r) {
            int mid = l + ((r - l) >> 1);
            if (GetDiff(nums, mid) > 0) {
                l = mid + 1;
                res = mid;
            }
            else {
                r = mid - 1;
            }
        }
        return res;
    }
    int GetDiff(vector<int>& nums, int index) {
        if (index == 0) {
            return INT_MAX;
        }
        return nums[index] - nums[index - 1];
    }
};