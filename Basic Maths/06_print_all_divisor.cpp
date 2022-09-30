// https://www.geeksforgeeks.org/sum-divisors-1-n/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long sum = 0;

        // Check how many times the number is occuring
        for (int i = 1; i <= N; i++)
            sum += (N / i) * i;

        return sum;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        long long ans = ob.sumOfDivisors(N);
        cout << ans << endl;
    }
    return 0;
}