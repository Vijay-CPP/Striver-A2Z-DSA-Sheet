#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> ans(n, 0);

        for (int i = 0; i < nums.size(); i++)
            ans[(i + k) % n] = nums[i];

        nums = ans;
    }
};

int main()
{

    return 0;
}