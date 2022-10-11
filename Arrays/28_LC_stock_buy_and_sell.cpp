//  Brute force soln use two loops to find all profits and take max

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int minPrice = INT_MAX;
        int profit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            minPrice = min(prices[i], minPrice);
            profit = max(profit, prices[i] - minPrice);
        }

        return profit;
    }
};

int main()
{

    return 0;
}