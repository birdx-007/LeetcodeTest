#pragma once
#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int>& nums, int val) {
        int newSize = (int)nums.size();
        for (int i = 0; i < newSize; i++) {
            if (nums[i] == val) {
                bool found = false;
                for (int j = newSize - 1; j > i; j--) {
                    if (nums[j] != val) {
                        nums[j] = nums[j] ^ nums[i];
                        nums[i] = nums[j] ^ nums[i];
                        nums[j] = nums[j] ^ nums[i];
                        newSize--;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    newSize = i;
                    break;
                }
            }
        }
        nums.resize(newSize);
        return newSize;
    }
};