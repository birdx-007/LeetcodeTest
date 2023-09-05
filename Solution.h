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
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int index1 = 0, index2 = n - 1;
        while (index1 < index2) {
            int sum = numbers[index1] + numbers[index2];
            if (sum == target) {
                vector<int> res = { index1 + 1,index2 + 1 };
                return res;
            }
            else if (sum < target) {
                index1++;
            }
            else {
                index2--;
            }
        }
        return vector<int>(2, 0);
    }
};