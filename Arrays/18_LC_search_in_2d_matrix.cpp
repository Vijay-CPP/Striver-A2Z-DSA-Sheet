#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int low = 0;
        int high = (rows * cols) - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            // mid / col will give row number
            // mid % col will five col number

            if (matrix[mid / cols][mid % cols] == target)
                return true;
            else if (matrix[mid / cols][mid % cols] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return false;
    }
};

int main()
{

    return 0;
}