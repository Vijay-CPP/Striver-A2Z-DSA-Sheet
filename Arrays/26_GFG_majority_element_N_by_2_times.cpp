// In GFG majority Element may or may not exist

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int count = 0;
        int element = 0;

        for (int i = 0; i < size; i++)
        {
            if (count == 0)
            {
                element = a[i];
                count++;
            }
            else if (a[i] == element)
                count++;
            else
                count--;
        }

        for (int i = 0; i < size; i++)
            if (element == a[i])
                count++;

        if (count * 2 > size)
            return element;
        else
            return -1;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends