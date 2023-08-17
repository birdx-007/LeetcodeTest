#pragma once
#include <vector>
using namespace std;
class Solution
{
public:
    int mySqrt(int x) {
        int l = 0, r = x, res = -1;
        while (l <= r) {
            int mid = l + ((r - l) >> 1);
            if ((long long)mid * mid <= x) {
                res = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        return res;
    }
};