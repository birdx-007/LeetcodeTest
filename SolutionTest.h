#pragma once
#include "Tools.h"
#include "Solution.h"
#include <iostream>
class SolutionTest
{
public:
	void TestSolution() {
		//std::cout << Tools::QuickPowForPositivePower(2,10) << std::endl;
		vector<vector<int>> triangle = { {2}, {3, 4},{6, 5, 7},{4, 1, 8, 3} };
		std::cout << solution.minimumTotal(triangle);
	}
private:
	Solution solution;
};