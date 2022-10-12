#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // take transpose
        // For clockwise rotation reverse rows
        
        for(int i=0; i<matrix.size(); i++)
            for(int j=0; j<i; j++)
                swap(matrix[i][j], matrix[j][i]);
        
        for(int i=0; i<matrix.size(); i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};

int main()
{
    

    return 0;
}