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
    string simplifyPath(string path) {
        stack<string> files;
        int start = 0, end = 0;
        int n = path.length();
        string file = "";
        while (true) {
            while (start < n && path[start] == '/') {
                start++;
                end++;
            }
            while (end < n && path[end] != '/') {
                end++;
            }
            if (end == n && start == end) {
                break;
            }
            file = path.substr(start, end - start);
            if (file == "..") {
                if (!files.empty()) {
                    files.pop();
                }
            }
            else if (file != ".") {
                files.push(file);
            }
            start = end;
        }
        string res = "";
        while (!files.empty()) {
            res = "/" + files.top() + res;
            files.pop();
        }
        if (res == "") {
            res = "/";
        }
        return res;
    }
};