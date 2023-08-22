#pragma once
#include "Tools.h"
#include "Solution.h"
#include <iostream>
class SolutionTest
{
public:
	void TestSolution() {
		//std::cout << Tools::QuickPowForPositivePower(2,10) << std::endl;
		string s = "abcabcab";
		std::cout << solution.lengthOfLongestSubstring(s);
	}
private:
	Solution solution;
};