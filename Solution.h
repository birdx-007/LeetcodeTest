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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        int pathSum = 0;
        return check(root, pathSum, targetSum);
    }
    bool check(TreeNode* root, int& sum, const int& targetSum) {
        sum += root->val;
        if (root->left == nullptr && root->right == nullptr) {
            if (sum == targetSum) {
                return true;
            }
            else {
                sum -= root->val;
                return false;
            }
        }
        bool l = false, r = false;
        if (root->left) {
            l = check(root->left, sum, targetSum);
        }
        if (!l && root->right) {
            r = check(root->right, sum, targetSum);
        }
        sum -= root->val;
        return l || r;
    }
};