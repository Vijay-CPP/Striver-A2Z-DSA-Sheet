#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> ans;
    int count = 1;

    void factorial(long long currFact, long long N)
    {
        if (currFact > N)
            return;

        ans.push_back(currFact);
        count++;

        factorial(currFact * count, N);
    }

    vector<long long> factorialNumbers(long long N)
    {
        factorial(1, N);
        return ans;
    }

    // Iterative Way below

    // vector<long long> factorialNumbers(long long N)
    // {
    //     long long fact = 1;
    //     vector<long long> ans;

    //     for(int i=2; fact<=N; i++)
    //     {
    //         ans.push_back(fact);
    //         fact = fact * i;
    //     }

    //     return ans;
    // }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}