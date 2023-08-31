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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        int levelNum;
        long long levelSum;
        q.push(root);
        while (!q.empty()) {
            levelNum = q.size();
            levelSum = 0;
            for (int i = 0; i < levelNum;i++) {
                TreeNode* p = q.front();
                q.pop();
                levelSum += p->val;
                if (p->left) {
                    q.push(p->left);
                }
                if (p->right) {
                    q.push(p->right);
                }
            }
            res.push_back((double)levelSum / levelNum);
        }
        return res;
    }
};