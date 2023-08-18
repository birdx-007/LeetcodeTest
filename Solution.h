#pragma once
#include <vector>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix.size() * matrix[0].size() - 1;
        while (l <= r) {
            int mid = l + ((r - l) >> 1);
            int midValue = GetMatrixValue(matrix, mid);
            if (midValue < target) {
                l = mid + 1;
            }
            else if (midValue > target) {
                r = mid - 1;
            }
            else {
                return true;
            }
        }
        return false;

    }
    int GetMatrixValue(vector<vector<int>>& matrix, int index) {
        return matrix[index / (int)matrix[0].size()][index % (int)matrix[0].size()];
    }
};