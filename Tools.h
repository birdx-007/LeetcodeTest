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
    static float QuickSqrtForFloat(float x) {
        int i = *(int*)&x;
        i = 0x1fbd1df5 + (i >> 1);
        x = *(float*)&i;
        return x;
    }
};