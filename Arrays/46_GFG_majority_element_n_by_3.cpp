

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> Solve(int n, vector<int> &nums)
    {
        // Code here
        int num1 = 0, num2 = 0;
        int count1 = 0, count2 = 0;

        for (auto it : nums)
        {
            if (it == num1)
                count1++;
            else if (it == num2)
                count2++;
            else if (count1 == 0)
            {
                num1 = it;
                count1 = 1;
            }
            else if (count2 == 0)
            {
                num2 = it;
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        vector<int> ans;
        count1 = count2 = 0;

        for (auto it : nums)
        {
            if (it == num1)
                count1++;

            if (it == num2)
                count2++;
        }

        if (count1 > nums.size() / 3)
            ans.push_back(num1);

        if (count2 > nums.size() / 3)
            ans.push_back(num2);

        if (ans.size() == 0)
            return {-1};
        else
            return ans;
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
        vector<int> a;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res)
            cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends