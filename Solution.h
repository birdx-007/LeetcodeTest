#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <utility>
#include <algorithm>
using namespace std;
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return buildChildTree(nums, 0, n - 1);
    }
    TreeNode* buildChildTree(vector<int>& nums, int l, int r) {
        if (l > r) {
            return nullptr;
        }
        int m = l + ((r - l) >> 1);
        TreeNode* root = new TreeNode(nums[m], buildChildTree(nums, l, m - 1), buildChildTree(nums, m + 1, r));
        return root;
    }
};