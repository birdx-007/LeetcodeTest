#pragma once
#include "Tools.h"
#include "Solution.h"
#include <iostream>
class SolutionTest
{
public:
	void TestSolution() {
		//std::cout << Tools::QuickPowForPositivePower(2,10) << std::endl;
		int target = 7;
		vector<int> nums = { 2,3,1,2,4,3 };
		std::cout << solution.minSubArrayLen(target,nums);
	}
private:
	Solution solution;
};