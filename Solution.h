#pragma once
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int>& nums) {
        int numsSize = (int)nums.size();
        if (numsSize == 0 || numsSize == 1) {
            return numsSize;
        }
        int slow = 0;
        int tolerance = 2;
        int count = 0;
        for (int quick = 0; quick < numsSize; quick++) {
            if (nums[slow] == nums[quick]) {
                count++;
            }
            else {
                int offset = min(count, tolerance);
                slow += offset;
                for (int i = slow; i < min(slow + tolerance, quick); i++) {
                    nums[i] = nums[quick];
                }
                count = 1;
            }
        }
        int offset = min(count, tolerance);
        slow += offset - 1;
        return slow + 1;
    }
};