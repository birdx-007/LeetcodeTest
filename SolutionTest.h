#pragma once
#include "Tools.h"
#include "Solution.h"
#include <iostream>
class SolutionTest
{
public:
	void TestSolution() {
		//std::cout << Tools::QuickPowForPositivePower(2,10) << std::endl;
		std::cout << solution.isSubsequence("adc", "aaabbbccc");
	}
private:
	Solution solution;
};