#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long reversedBits(long long n)
    {
        long long ans = 0;
        int bits = 32;

        while (bits--)
        {
            ans = (ans << 1) | (n & 1);
            n = n >> 1;
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long X;

        cin >> X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}