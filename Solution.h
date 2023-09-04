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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        check(root, p, q);
        return res;
    }
    bool check(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) {
            return false;
        }
        bool flson = check(root->left, p, q);
        bool frson = check(root->right, p, q);
        if ((flson && frson) || ((root->val == p->val || root->val == q->val) && (flson || frson))) {
            res=root;
        }
        return flson || frson || root->val == p->val || root->val == q->val;
    }
private:
    TreeNode* res = nullptr;
};