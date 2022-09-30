#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string armstrongNumber(int n)
    {
        int num = n;
        int sum = 0;

        while (num > 0)
        {
            sum += pow(num % 10, 3);
            num = num / 10;
        }

        if (n == sum)
            return "Yes";
        else
            return "No";
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
