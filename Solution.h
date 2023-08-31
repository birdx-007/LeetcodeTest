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
    void solve(vector<vector<char>>& board) {
        int m = board.size(), n = board[0].size();
        for (int i = 0; i < m; i++) {
            if (board[i][0] == 'O') {
                setDirty(board, i, 0);
            }
            if (board[i][n - 1] == 'O') {
                setDirty(board, i, n - 1);
            }
        }
        for (int j = 1; j < n - 1; j++) {
            if (board[0][j] == 'O') {
                setDirty(board, 0, j);
            }
            if (board[m - 1][j] == 'O') {
                setDirty(board, m - 1, j);
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
                else if (board[i][j] == 'A') {
                    board[i][j] = 'O';
                }
            }
        }
    }
    void setDirty(vector<vector<char>>& board,const int& i,const int& j) {
        if (!isOnBoard(board, i, j) || board[i][j] != 'O') {
            return;
        }
        board[i][j] = 'A';
        setDirty(board, i - 1, j);
        setDirty(board, i + 1, j);
        setDirty(board, i, j - 1);
        setDirty(board, i, j + 1);
    }
    bool isOnBoard(const vector<vector<char>>& board,const int& i,const int& j) {
        return i >= 0 && i < (int)board.size()
            && j >= 0 && j < (int)board[0].size();
    }
};