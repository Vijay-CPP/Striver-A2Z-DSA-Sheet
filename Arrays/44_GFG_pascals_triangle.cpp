//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
#define MOD 1000000007

class Solution
{
public:
    vector<ll> nthRowOfPascalTriangle(int n)
    {

        vector<vector<ll>> r(n);

        for (int i = 0; i < n; i++)
        {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;

            for (int j = 1; j < i; j++)
            {
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
                r[i][j] = r[i][j] % MOD;
            }
        }

        return r[n - 1];
    }

    // Can also be written like this
    // vector<ll> nthRowOfPascalTriangle(int n) {
    //     vector<vector<ll>> ans;
    
    //     for(int i=0; i<n; i++)
    //     {
    //         vector<ll> row(i+1, 0);
            
    //         for(int j=0; j<=i; j++)
    //         {
    //             if(j == 0 || (j == i && j != 0))
    //                 row[j] = 1;
    //             else
    //             {
    //                 row[j] = ans[i-1][j] + ans[i-1][j-1];
    //                 row[j] = row[j] % MOD;
    //             }
    //         }
            
    //         ans.push_back(row);
    //     }
        
    //     return ans[n-1];
    // }
};

//{ Driver Code Starts.

void printAns(vector<ll> &ans)
{
    for (auto &x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends