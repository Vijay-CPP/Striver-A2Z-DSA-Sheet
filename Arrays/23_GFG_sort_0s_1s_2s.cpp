//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        int start = 0, end = n - 1, index = 0;

        while (index <= end) // <= bcs 2,0,1
        {
            if (a[index] == 1)
                index++;

            else if (a[index] == 0)
                swap(a[start++], a[index++]);

            else if (a[index] == 2)
                swap(a[end--], a[index]);
        }
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends