#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long gcd(long long a, long long b)
    {
        if (b == 0)
            return a;
        else
            return gcd(b, a % b);
    }

    vector<long long> lcmAndGcd(long long A, long long B)
    {

        vector<long long> ans(2, 0);

        ans[1] = gcd(A, B);
        ans[0] = (A * B) / ans[1];

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long A, B;

        cin >> A >> B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}