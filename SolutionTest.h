#pragma once
#include "Tools.h"
#include "Solution.h"
#include <iostream>
class SolutionTest
{
public:
	void TestSolution() {
		//std::cout << Tools::QuickPowForPositivePower(2,10) << std::endl;
		vector<int> nums = { 1,1,2,3,4,4,4,5,6 };
		auto result = solution.searchRange(nums, 4);
		std::cout << result[0] << " " << result[1];
	}
private:
	Solution solution;
};