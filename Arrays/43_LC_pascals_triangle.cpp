#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }
};

// Can also by written like this

// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
        
//         vector<vector<int>> ans;
        
//         for(int i=0; i<numRows; i++)
//         {
//             vector<int> row(i+1, 0);
            
//             for(int j=0; j<=i; j++)
//             {
//                 if(j == 0 || (j == i && j != 0))
//                     row[j] = 1;
//                 else
//                     row[j] = ans[i-1][j] + ans[i-1][j-1];
//             }
            
//             ans.push_back(row);
//         }
        
//         return ans;
//     }
// };

int main()
{
    

    return 0;
}