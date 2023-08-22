#pragma once
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0, end = 0, sum = 0;
        int res = INT_MAX;
        while (end < (int)nums.size()) {
            sum += nums[end];
            while (sum >= target) {
                res = min(res, end - start + 1);
                sum -= nums[start];
                start++;
            }
            end++;
        }
        if (res == INT_MAX) {
            return 0;
        }
        return res;
    }
};