//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int lenOfLongSubarr(int arr[], int n, int k)
    {
        unordered_map<int, int> um;

        int sum = 0;
        int maxLen = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum == k)
                maxLen = i + 1;

            if (um.find(sum - k) != um.end())
                maxLen = max(maxLen, i - um[sum - k]);

            if (um.find(sum) == um.end())
                um[sum] = i;
        }

        return maxLen;
    }
};

//{ Driver Code Starts.

int main()
{
    // code

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.lenOfLongSubarr(a, n, k) << endl;
    }

    return 0;
}
// } Driver Code Ends