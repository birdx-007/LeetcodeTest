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
    int singleNumber(vector<int>& nums) {
        int n = 0;
        for (int i = 0; i < 32;i++) {
            int sum_i = 0;
            for (int num : nums) {
                sum_i += (num >> i) & 1;
            }
            if (sum_i % 3) {
                n |= (1 << i);
            }
        }
        return n;
    }
};