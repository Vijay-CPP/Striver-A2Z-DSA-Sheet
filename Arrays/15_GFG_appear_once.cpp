//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(int A[], int N)
    {
        // code

        if (N == 1)
            return A[0];

        int i = 0;
        while (i < N - 1)
        {
            if (A[i] == A[i + 1])
                i += 2;
            else
                return A[i];
        }

        return A[N - 1];
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t, len;
    cin >> t;
    while (t--)
    {
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.search(arr, len) << '\n';
    }
    return 0;
}

// } Driver Code Ends