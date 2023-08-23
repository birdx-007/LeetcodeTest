#pragma once
#include "ListNode.h"
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int start = 0, end = 0;
        for (int i = 1; i < (int)nums.size(); i++)
        {
            if (nums[i] != nums[end] + 1) {
                if (start == end) {
                    res.push_back(to_string(nums[start]));
                }
                else {
                    res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
                }
                start = i;
            }
            end = i;
        }
        if (start <= (int)nums.size() - 1) {
            if (start == end) {
                res.push_back(to_string(nums[start]));
            }
            else {
                res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
            }
        }
        return res;
    }
};