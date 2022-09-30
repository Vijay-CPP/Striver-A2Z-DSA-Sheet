#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> printFibb(int n)
    {
        vector<long long> ans(n, 0);

        ans[0] = 1;
        ans[1] = 1;

        for (int i = 2; i < n; i++)
            ans[i] = ans[i - 1] + ans[i - 2];

        return ans;
    }
};

int main()
{
    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // taking number of elements
        int n;
        cin >> n;
        Solution obj;
        // calling function printFibb()
        vector<long long> ans = obj.printFibb(n);

        // printing the elements of vector
        for (long long i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
