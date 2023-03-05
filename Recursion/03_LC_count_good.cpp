#include <bits/stdc++.h>
using namespace std;
#define v vector

class Solution
{
public:
    int mod = 1e9 + 7;

    long long power(long long x, long long n)
    {
        if (n == 0)
            return 1;

        long long ans = 1;

        while (n > 0)
        {
            if (n & 1)
            {
                ans = (ans * x) % mod;
                n--;
            }
            else
            {
                x = (x * x) % mod;
                n = n >> 1;
            }
        }

        return ans;
    }

    int countGoodNumbers(long long n)
    {
        long long evenIndex, oddIndex;

        evenIndex = (n + 1) / 2;
        oddIndex = n / 2;

        return (power(5, evenIndex) * power(4, oddIndex)) % mod;
    }
};

int main()
{

    return 0;
}