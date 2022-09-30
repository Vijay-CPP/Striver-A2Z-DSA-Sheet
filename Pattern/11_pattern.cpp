#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            // Starting digit
            int digit = i % 2;

            for (int j = 1; j <= i; j++)
            {
                cout << digit << " ";
                // Alternate between 1 & 0 using bitwise AND
                digit = !digit;
            }

            cout << "\n";
        }
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
        ob.printTriangle(n);
    }
    return 0;
}