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
    int countNodes(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int depth = 0, lastLevelNum = 0;
        TreeNode* cur = root;
        while (cur) {
            depth++;
            cur = cur->left;
        }
        int left = 1 << (depth - 1), right = (1 << depth) - 1;
        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            if (exist(root, depth, mid)) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return right;
    }
    bool exist(TreeNode* root, int level, int k) {
        if (level == 1) {
            return root;
        }
        TreeNode* cur = root;
        for (int i = 1 << (level - 2); i > 0; i >>= 1) {
            if ((k & i) > 0) {
                cur = cur->right;
            }
            else {
                cur = cur->left;
            }
        }
        return cur;
    }
};