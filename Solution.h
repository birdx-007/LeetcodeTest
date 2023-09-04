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
    int getMinimumDifference(TreeNode* root) {
        stack<TreeNode*> stk;
        TreeNode* cur = root;
        int pre = -1;
        int res = 1e5;
        while (cur || !stk.empty()) {
            while (cur) {
                stk.push(cur);
                cur = cur->left;
            }
            cur = stk.top();
            stk.pop();
            if (pre == -1) {
                pre = cur->val;
            }
            else {
                res = min(res, cur->val - pre);
                pre = cur->val;
            }
            cur = cur->right;
        }
        return res;
    }
};