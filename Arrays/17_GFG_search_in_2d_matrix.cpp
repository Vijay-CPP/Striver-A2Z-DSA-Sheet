//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int matSearch(vector<vector<int>> &mat, int N, int M, int X)
    {
        int row = 0;
        int col = mat[0].size() - 1;

        while (row < mat.size() && col >= 0)
        {
            int val = mat[row][col];

            if (val == X)
                return true;

            else if (X < val)
                col--;
            else
                row++;
        }

        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

        int x;
        cin >> x;
        Solution ob;
        cout << ob.matSearch(arr, n, m, x) << endl;
    }
}
// } Driver Code Ends