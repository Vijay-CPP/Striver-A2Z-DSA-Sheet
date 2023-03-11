//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n, int x)
{
    int firstOcc = lower_bound(arr, arr + n, x) - arr;
    int lastOcc = upper_bound(arr, arr + n, x) - arr - 1;

    vector<int> ans;

    if (arr[firstOcc] == x)
        ans.push_back(firstOcc);
    else
        ans.push_back(-1);

    if (arr[lastOcc] == x)
        ans.push_back(lastOcc);
    else
        ans.push_back(-1);

    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends

// Leetcode

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    
        vector<int> ans = {-1, -1};

        if(nums.size() == 0)
            return ans;

        int firstOcc = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int lastOcc = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

        if(lastOcc <= firstOcc)
            return ans;
        
        ans[0] = firstOcc;
        ans[1] = lastOcc - 1;

        return ans;
    }
};