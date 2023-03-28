#include <bits/stdc++.h>
using namespace std;
#define v vector

class Solution
{
public:
    int divide(int dividend, int divisor)
    {

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        unsigned int a = abs(dividend), b = abs(divisor), ans = 0;
        int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

        for (int i = 31; i >= 0; i--)
        {
            if ((a >> i) >= b)
            {
                ans += 1 << i;
                a -= b << i;
            }
        }

        return sign > 0 ? ans : -ans;
    }
};

int main()
{

    return 0;
}