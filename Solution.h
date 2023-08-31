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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        for (int i = 0; i < n; i++) {
            index[inorder[i]] = i;
        }
        return build(inorder, postorder, 0, n - 1, 0, n - 1);
    }
    TreeNode* build(const vector<int>& inorder,const vector<int>& postorder, int inL, int inR, int postL, int postR) {
        if (inL > inR) {
            return nullptr;
        }
        int postRootIndex = postR;
        int inRootIndex = index[postorder[postRootIndex]];
        TreeNode* root = new TreeNode(postorder[postRootIndex]);
        int lengthL = inRootIndex - inL;
        root->left = build(inorder, postorder, inL, inRootIndex - 1, postL, postL + lengthL - 1);
        root->right = build(inorder, postorder, inRootIndex + 1, inR, postL + lengthL, postR - 1);
        return root;
    }
private:
    unordered_map<int, int> index;
};