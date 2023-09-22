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
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexMap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (indexMap.find(target - nums[i]) == indexMap.end()) {
                indexMap[nums[i]] = i;
            }
            else {
                return { indexMap[target - nums[i]],i };
            }
        }
        return { -1,-1 };
    }
};