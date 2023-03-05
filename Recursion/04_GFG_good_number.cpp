//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    bool isGood(int n, int sum, int D)
    {
        if (n == 0)
            return true;

        if (sum >= n % 10 || n % 10 == D)
            return false;

        sum += n % 10;

        return isGood(n / 10, sum, D);
    }

    vector<int> goodNumbers(int L, int R, int D)
    {

        vector<int> ans;

        for (int i = L; i <= R; ++i)
        {
            int sum = i % 10;

            if (sum == D)
                continue;

            if (isGood(i / 10, sum, D))
                ans.push_back(i);
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans)
            cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends