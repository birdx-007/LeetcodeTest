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
    int getNext(int n) {
        int m = 0;
        while (n > 0) {
            m += (n % 10) * (n % 10);
            n /= 10;
        }
        return m;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);
        while (fast != 1 && fast != slow) {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        return fast == 1;
    }
};