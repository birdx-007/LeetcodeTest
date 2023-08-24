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
    int evalRPN(vector<string>& tokens) {
        stack<string> operationSpace;
        for (string token : tokens) {
            if (token.length() == 1) {
                char c = token[0];
                if (c == '+' || c == '-' || c == '*' || c == '/') {
                    int right = atoi(operationSpace.top().c_str());
                    operationSpace.pop();
                    int left = atoi(operationSpace.top().c_str());
                    operationSpace.pop();
                    int result;
                    switch (c)
                    {
                    case '+':
                        result = left + right;
                        break;
                    case '-':
                        result = left - right;
                        break;
                    case '*':
                        result = left * right;
                        break;
                    default:
                        result = left / right;
                        break;
                    }
                    operationSpace.push(to_string(result));
                    continue;
                }
            }
            operationSpace.push(token);
        }
        return atoi(operationSpace.top().c_str());
    }
};