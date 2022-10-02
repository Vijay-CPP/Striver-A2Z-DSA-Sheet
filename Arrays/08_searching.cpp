//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche

    int binarySearch(int arr[], int n, int target)
    {
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (arr[mid] == target)
                return mid;
            else if (target > arr[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }

        return -1;
    }

    int searchInSorted(int arr[], int N, int K)
    {

        return binarySearch(arr, N, K) == -1 ? -1 : 1;
    }
};

//{ Driver Code Starts.

int main(void)
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;
    }

    return 0;
}

// } Driver Code Ends