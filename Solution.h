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
    
};

class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        cur = root;
        while (cur != nullptr) {
            stk.push(cur);
            cur = cur->left;
        }
    }

    int next() {
        while (cur != nullptr) {
            stk.push(cur);
            cur = cur->left;
        }
        TreeNode* top = stk.top();
        stk.pop();
        cur = top->right;
        return top->val;
    }

    bool hasNext() {
        return cur != nullptr || !stk.empty();
    }
private:
    TreeNode* cur;
    stack<TreeNode*> stk;
};