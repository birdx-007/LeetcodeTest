#pragma once
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() == 1) {
            vector<vector<int>> single(1, nums);
            return single;
        }
        vector<int> sub(nums);
        int x = sub[nums.size() - 1];
        sub.pop_back();
        int spaceNumOfSub = sub.size() + 1;
        vector<vector<int>> subPermutes = permute(sub);
        vector<vector<int>> result(spaceNumOfSub * subPermutes.size());
        for (int i = 0; i < subPermutes.size(); i++) {
            vector<int> subPermute = subPermutes[i];
            for (int j = 0; j < spaceNumOfSub; j++) {
                int index = i * spaceNumOfSub + j;
                result[index] = vector<int>(subPermute);
                result[index].insert(result[index].begin() + j, x);
            }
        }
        return result;
    }
};