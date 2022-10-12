#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        if (nums.size() == 0)
            return 0;

        unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);

        int count = 0;
        int maxCount = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (!s.count(nums[i] - 1))
            {
                int currNum = nums[i];
                count = 1;

                while (s.count(currNum + 1))
                {
                    currNum++;
                    count++;
                }

                maxCount = max(maxCount, count);
            }
        }

        return maxCount;
    }
};

int main()
{

    return 0;
}