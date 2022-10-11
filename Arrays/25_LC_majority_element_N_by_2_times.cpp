#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int element = 0;

        for (int num : nums)
        {
            if (count == 0)
            {
                element = num;
                count++;
            }
            else if (num == element)
                count++;
            else
                count--;
        }

        return element;
    }
};

int main()
{

    return 0;
}