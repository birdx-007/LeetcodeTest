#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        return compare(root->left, root->right);
    }
    bool compare(TreeNode* left, TreeNode* right) {
        if ((left == nullptr) ^ (right == nullptr)) {
            return false;
        }
        if (left == nullptr && right == nullptr) {
            return true;
        }
        if (left->val != right->val) {
            return false;
        }
        return compare(left->left, right->right) && compare(left->right, right->left);
    }
};