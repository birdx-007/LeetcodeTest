#pragma once
#include "Tools.h"
#include "Solution.h"
#include <iostream>
class SolutionTest
{
public:
	void TestSolution() {
		//std::cout << Tools::QuickPowForPositivePower(2,10) << std::endl;
		vector<int> nums = { 3,3 };
		std::cout << solution.removeElement(nums, 3) << std::endl;
		for (int i = 0; i < (int)nums.size(); i++) {
			std::cout << nums[i] << ' ';
		}
	}
private:
	Solution solution;
};