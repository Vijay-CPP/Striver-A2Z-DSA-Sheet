//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int dir = 0;
        int top, down, right, left;

        top = left = 0;
        down = a.size() - 1;
        right = a[0].size() - 1;

        while (top <= down && left <= right)
        {
            if (dir == 0)
            {
                for (int i = left; i <= right; ++i)
                {
                    k--;
                    if (k == 0)
                        return a[top][i];
                }

                top++;
            }
            else if (dir == 1)
            {
                for (int i = top; i <= down; ++i)
                {
                    k--;
                    if (k == 0)
                        return a[i][right];
                }

                right--;
            }
            else if (dir == 2)
            {
                for (int i = right; i >= left; i--)
                {
                    k--;
                    if (k == 0)
                        return a[down][i];
                }

                down--;
            }
            else
            {
                for (int i = down; i >= top; i--)
                {
                    k--;
                    if (k == 0)
                        return a[i][left];
                }

                left++;
            }

            dir = (dir + 1) % 4;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        int k = 0;
        // cin>>k;
        cin >> n >> m >> k;
        vector<vector<int>> a(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        Solution obj;

        cout << obj.findK(a, n, m, k) << "\n";
    }
}
// } Driver Code Ends