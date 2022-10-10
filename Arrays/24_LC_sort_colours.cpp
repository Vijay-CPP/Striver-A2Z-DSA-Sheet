#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int i, j, k;
        i = 0;
        j = 0;
        k = nums.size()-1;
        
        while(j <= k) // <= bcs 2,0,1
        {
            if(nums[j] == 0)
                swap(nums[j++], nums[i++]);
            else if(nums[j] == 1)
                j++;
            else
                swap(nums[j], nums[k--]);
        }
    }
};

int main()
{
    

    return 0;
}