#pragma once
#include "Tools.h"
#include "Solution.h"
#include <iostream>
class SolutionTest
{
public:
	void TestSolution() {
		//std::cout << Tools::QuickPowForPositivePower(2,10) << std::endl;
		vector<int> nums = { 1,1,1,1,2,2,2 };
		int newSize = solution.removeDuplicates(nums);
		for (int i = 0; i < newSize; i++) {
			std::cout << nums[i] << ' ';
		}
	}
private:
	Solution solution;
};