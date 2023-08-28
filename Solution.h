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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return root;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            auto p = q.front();
            q.pop();
            auto tmp = p->left;
            p->left = p->right;
            p->right = tmp;
            if (p->left != nullptr) {
                q.push(p->left);
            }
            if (p->right != nullptr) {
                q.push(p->right);
            }
        }
        return root;
    }
};