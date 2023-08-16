#pragma once
class Tools
{
public:
	static double QuickPowForPositivePower(double x, long long n) {
        double res = 1.0;
        double delta = x;
        while (n > 0) {
            if (n & 1) {
                res *= delta;
            }
            delta *= delta;
            n >>= 1;
        }
        return res;
    }
};