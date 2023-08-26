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
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        if (k == 0) {
            return;
        }
        int cnt = gcd(n, k);
        for (int i = 0; i < cnt; i++) {
            int cur = i;
            int nxt = (cur + k) % n;
            int tmp = nums[cur];
            do {
                {
                    tmp = tmp ^ nums[nxt];
                    nums[nxt] = tmp ^ nums[nxt];
                    tmp = tmp ^ nums[nxt];
                }
                cur = nxt;
                nxt = (cur + k) % n;
            } while (cur != i);
        }
    }
    int gcd(int a, int b) {
        return b ? gcd(b, a % b) : a;
    }
};