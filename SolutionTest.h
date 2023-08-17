#pragma once
#include "Tools.h"
#include "Solution.h"
#include <iostream>
class SolutionTest
{
public:
	void TestSolution() {
		//std::cout << Tools::QuickPowForPositivePower(2,10) << std::endl;
		vector<int> nums = { 1,2 };
		std::cout << solution.findPeakElement(nums);
	}
private:
	Solution solution;
};