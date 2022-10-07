// Method 1 - O(n^2) - Two Loop - all subarrays.
// Method 2 - Prefix map

#include <bits/stdc++.h>
using namespace std;
#define v vector

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {

        unordered_map<int, int> um;
        int sum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            if (sum == k)
                count++;

            if (um.find(sum - k) != um.end())
                count += um[sum - k];

            um[sum]++;
        }

        return count;
    }
};

int main()
{

    return 0;
}

// Method 1

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
        
//         //brute force approach
        
//         int count = 0;
        
//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             int sum = nums[i];
            
//             if(sum == k) count++;
            
//             for(int j = i + 1 ; j < nums.size() ; j++)
//             {                
//                     sum = sum + nums[j];
                
//                 if (sum == k) count++;
//             }
//         }
//         return count;
//     }
// };