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
    void flatten(TreeNode* root) {
        TreeNode* cur = root;
        while (cur) {
            if (cur->left) {
                TreeNode* nxt = cur->left;
                TreeNode* pre = nxt;
                while (pre->right) {
                    pre = pre->right;
                }
                pre->right = cur->right;
                cur->right = nxt;
                cur->left = nullptr;
            }
            cur = cur->right;
        }
    }
};