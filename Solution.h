#pragma once
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int>& nums) {
        int numsSize = (int)nums.size();
        if (numsSize == 0) {
            return 0;
        }
        int slow = 0;
        for (int quick = 0; quick < numsSize; quick++) {
            if (nums[quick] != nums[slow]) {
                slow++;
                nums[slow] = nums[quick];
            }
        }
        return slow+1;
    }
};