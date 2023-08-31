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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        for (int i = 0; i < n; i++) {
            index[inorder[i]] = i;
        }
        return build(preorder, inorder, 0, n - 1, 0, n - 1);
    }
    TreeNode* build(const vector<int>& preorder, const vector<int>& inorder, int preL, int preR, int inL, int inR) {
        if (preL > preR) {
            return nullptr;
        }
        int preRootIndex = preL;
        int inRootIndex = index[preorder[preRootIndex]];
        TreeNode* root = new TreeNode(preorder[preRootIndex]);
        int lengthL = inRootIndex - inL;
        root->left = build(preorder, inorder, preL + 1, preL + lengthL, inL, inRootIndex - 1);
        root->right = build(preorder, inorder, preL + lengthL + 1, preR, inRootIndex + 1, inR);
        return root;
    }
private:
    unordered_map<int, int> index;
};