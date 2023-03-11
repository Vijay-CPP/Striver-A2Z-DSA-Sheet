#include <bits/stdc++.h>
using namespace std;

// Element which is just strictly greater than target
int upperBound(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > target)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    return ans;
}

int main()
{
    vector<int> v = {10, 10, 20, 30, 40, 50, 60};
    cout << upperBound(v, 70);
    return 0;
}