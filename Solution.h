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
    vector<vector<int>> combine(int n, int k) {
        dfs(1, n, k);
        return res;
    }
    void dfs(int cur, int n, int k) {
        int c_size = c.size();
        if (c_size + n - cur + 1 < k) {
            return;
        }
        if (c_size == k) {
            res.push_back(c);
            return;
        }
        c.push_back(cur);
        dfs(cur + 1, n, k);
        c.pop_back();
        dfs(cur + 1, n, k);
    }
private:
    vector<int> c;
    vector<vector<int>> res;
};