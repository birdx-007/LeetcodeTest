#pragma once
#include "Tools.h"
#include "Solution.h"
#include <iostream>
class SolutionTest
{
public:
	void TestSolution() {
		//std::cout << Tools::QuickPowForPositivePower(2,10) << std::endl;
		vector<int> nums = { 1,2,3,4,5 };
		auto result = solution.permute(nums);
		for (int i = 0; i < result.size(); i++) {
			for (int j = 0; j < result[0].size(); j++) {
				std::cout << result[i][j] << ' ';
			}
			std::cout << '\n';
		}
	}
private:
	Solution solution;
};