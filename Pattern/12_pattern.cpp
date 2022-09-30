#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        int spaces = 2 * n - 2;
        int num = 1;

        for (int i = 1; i <= n; i++)
        {
            // Loop fro numbers
            for (int j = 1; j <= num; j++)
                cout << j << " ";

            // Loop for spaces
            for (int j = 1; j <= spaces; j++)
                cout << "  ";

            // Loop fro numbers
            for (int j = num; j >= 1; j--)
                cout << j << " ";

            cout << "\n";

            // Update for next line
            num++;
            spaces -= 2;
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