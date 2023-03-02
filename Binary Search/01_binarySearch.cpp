#include <bits/stdc++.h>
using namespace std;
#define v vector

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {

        int low = 0, high = nums.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;

            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return -1;
    }
};

int main()
{

    return 0;
}