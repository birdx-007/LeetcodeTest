#pragma once
#include "Tools.h"
#include "Solution.h"
#include <iostream>
class SolutionTest
{
public:
	void TestSolution() {
		//std::cout << Tools::QuickPowForPositivePower(2,10) << std::endl;
		vector<vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9} };
		vector<int> res = solution.spiralOrder(matrix);
		for (int i = 0; i < (int)res.size(); i++) {
			std::cout << res[i] << ' ';
		}
	}
private:
	Solution solution;
};