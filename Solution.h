#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int num = 0;
        for (int i = 0; i < (int)grid.size(); i++) {
            for (int j = 0; j < (int)grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    num++;
                    dfs(grid,i,j);
                }
            }
        }
        return num;
    }
    void dfs(vector<vector<char>>& grid,int i,int j) {
        if (!isInGrid(grid, i, j) || grid[i][j]!='1') {
            return;
        }
        grid[i][j] = '2';
        dfs(grid, i - 1, j);
        dfs(grid, i + 1, j);
        dfs(grid, i, j - 1);
        dfs(grid, i, j + 1);
    }
    bool isInGrid(vector<vector<char>>& grid, int i, int j) {
        return i >= 0 && i < (int)grid.size()
            && j >= 0 && j < (int)grid[0].size();
    }
};