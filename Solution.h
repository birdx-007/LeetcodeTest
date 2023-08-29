#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <utility>
#include <algorithm>
using namespace std;
class Solution {
public:
    enum direction {
        right, down, left, up
    };
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int cnt = 0, m = matrix.size(), n = matrix[0].size();
        direction d = right;
        bool hasMoved = true;
        int i = 0, j = 0;
        while (cnt < m * n) {
            if (hasMoved) {
                res.push_back(matrix[i][j]);
                cnt++;
            }
            hasMoved = moveToNextPos(d, i, j, m, n);
        }
        return res;
    }
    bool moveToNextPos(direction& d, int& i, int& j, const int& m, const int& n) {
        switch (d)
        {
        case right:
            if (j < n - i - 1) {
                j++;
                if (j == n - i - 1) {
                    d = down;
                }
                return true;
            }
            d = down;
            return false;
        case down:
            if (i < j - n + m) {
                i++;
                if (i == j - n + m) {
                    d = left;
                }
                return true;
            }
            d = left;
            return false;
        case left:
            if (j > m - i - 1) {
                j--;
                if (j == m - i - 1) {
                    d = up;
                }
                return true;
            }
            d = up;
            return false;
        default:
            if (i > j + 1) {
                i--;
                if (i == j + 1) {
                    d = right;
                }
                return true;
            }
            d = right;
            return false;
        }
    }
};