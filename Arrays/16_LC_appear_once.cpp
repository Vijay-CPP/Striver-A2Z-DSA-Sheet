#include <bits/stdc++.h>
using namespace std;
#define v vector

// Each element cancels off its duplicate and remain only one

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        int XOR = 0;

        for (auto it : nums)
            XOR = XOR ^ it;

        return XOR;
    }
};

int main()
{

    return 0;
}