#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {

        int currCount = 0;
        int count = 0;

        for (auto it : nums)
        {
            if (it == 1)
                currCount++;
            else
            {
                count = max(currCount, count);
                currCount = 0;
            }
        }

        count = max(currCount, count);

        return count;
    }
};

int main()
{

    return 0;
}