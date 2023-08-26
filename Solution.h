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
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> rowZero((int)matrix.size(), false);
        vector<bool> colZero((int)matrix[0].size(), false);
        for (int i = 0; i < (int)matrix.size(); i++) {
            for (int j = 0; j < (int)matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    rowZero[i] = colZero[j] = true;
                }
                else {
                    if (rowZero[i]||colZero[j]) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        for (int i = 0; i < (int)matrix.size(); i++) {
            for (int j = 0; j < (int)matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    continue;
                }
                if (rowZero[i] || colZero[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};