// Method 01 - Two loop
// Method 02 - Sort the array then two pointer
// Method 03 - hashing

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> m;
        vector<int> ans;

        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (m.find(target - nums[i]) != m.end())
            {
                ans.push_back(i);
                ans.push_back(m[target - nums[i]]);
                break;
            }

            m[nums[i]] = i;
        }

        return ans;
    }
};

int main()
{

    return 0;
}