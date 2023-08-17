#pragma once
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = BinarySearch(nums, target - 1) + 1;
        int r = BinarySearch(nums, target);
        if (l <= r) {
            return vector<int>{l, r};
        }
        else {
            return vector<int>{-1, -1};
        }
    }
    /// <summary>
    /// 寻找出现target范围的右边界
    /// </summary>
    /// <param name="nums"></param>
    /// <param name="target"></param>
    /// <returns></returns>
    int BinarySearch(vector<int>& nums, int target) {
        int l = 0, r = (int)nums.size() - 1;
        while (l <= r) {
            int mid = l + ((r - l) >> 1);
            if (nums[mid] <= target) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        return l - 1;
    }
};