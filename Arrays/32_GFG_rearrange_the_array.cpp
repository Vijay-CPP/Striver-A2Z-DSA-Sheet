//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    void rearrange(int arr[], int n)
    {
        vector<int> positive;
        vector<int> negative;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
                positive.push_back(arr[i]);
            else
                negative.push_back(arr[i]);
        }

        int i = 0;
        int pos = 0;
        int neg = 0;

        while (pos < positive.size() && neg < negative.size())
        {
            if (i % 2 == 0)
                arr[i++] = positive[pos++];
            else
                arr[i++] = negative[neg++];
        }

        while (pos < positive.size())
            arr[i++] = positive[pos++];

        while (neg < negative.size())
            arr[i++] = negative[neg++];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends