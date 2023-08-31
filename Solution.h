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
    int sumNumbers(TreeNode* root) {
        int totalSum = 0;
        int pathSum = 0;
        sum(root, totalSum, pathSum);
        return totalSum;
    }
    void sum(TreeNode* root, int& totalSum, int& pathSum) {
        pathSum = pathSum * 10 + root->val;
        if (root->left == nullptr && root->right == nullptr) {
            totalSum += pathSum;
            pathSum /= 10;
            return;
        }
        if (root->left) {
            sum(root->left, totalSum, pathSum);
        }
        if (root->right) {
            sum(root->right, totalSum, pathSum);
        }
        pathSum /= 10;
        return;
    }
};