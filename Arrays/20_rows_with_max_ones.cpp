// 1st method - traverse column wise and if you get 1 then that's the row
// 2nd Method - binary seach on every row
// 3rd method below

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> mat, int n, int m)
    {
        int maxRow = -1;
        int row = 0;
        int col = m - 1;

        while (row < n && col >= 0)
        {
            if (mat[row][col] == 1)
            {
                maxRow = row;
                col--;
            }
            else
                row++;
        }

        return maxRow;
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
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends