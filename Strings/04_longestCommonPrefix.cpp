#include <bits/stdc++.h>
using namespace std;
#define v vector

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";

        int minLen = INT_MAX;
        for(auto it : strs)
            minLen = min(minLen, (int)it.length());

        for(int i=0; i<minLen; i++)
        {
            bool isSame = true;

            for(int j=1; j<strs.size(); j++)
            {
                if(strs[j][i] != strs[j-1][i])
                {
                    isSame = false;
                    break;
                }
            }

            if(isSame)
                ans += strs[0][i];
            else
                break;
        }

        return ans;
    }
};

int main()
{
    

    return 0;
}