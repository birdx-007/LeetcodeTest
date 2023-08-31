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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) {
            return res;
        }
        queue<TreeNode*> q;
        int levelNum;
        q.push(root);
        while (!q.empty()) {
            levelNum = q.size();
            res.push_back(vector<int>());
            while (levelNum > 0) {
                levelNum--;
                TreeNode* p = q.front();
                q.pop();
                res.back().push_back(p->val);
                if (p->left) {
                    q.push(p->left);
                }
                if (p->right) {
                    q.push(p->right);
                }
            }
        }
        return res;
    }
};