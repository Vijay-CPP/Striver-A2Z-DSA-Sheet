// Method 1 - use hashmap
// Method 2 - use Boyer Moore's Voting Algo

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = 0, num2 = 0;
        int count1 = 0, count2 = 0;
        
        for(auto it : nums)
        {
            if(it == num1)
                count1++;
            else if(it == num2)
                count2++;
            else if(count1 == 0)
            {
                num1 = it;
                count1 = 1;
            }
            else if(count2 == 0)
            {
                num2 = it;
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        
        vector<int> ans;
        count1 = count2 = 0;
        
        for(auto it : nums)
        {
            if(it == num1)
                count1++;
            
            if(it == num2)
                count2++;
        }
        
        if(count1 > nums.size()/3)
            ans.push_back(num1);
        
        if(count2 > nums.size()/3 && num1 != num2)
            ans.push_back(num2);
        
        return ans;
    }
};

int main()
{
    

    return 0;
}