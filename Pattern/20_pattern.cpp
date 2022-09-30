#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        int stars = 1;
        int spaces = 2 * n - 2;

        for (int i = 1; i <= 2 * n - 1; i++)
        {
            for (int j = 1; j <= stars; j++)
                cout << "*";

            for (int j = 1; j <= spaces; j++)
                cout << " ";

            for (int j = 1; j <= stars; j++)
                cout << "*";

            cout << "\n";

            if (i < n)
            {
                spaces -= 2;
                stars++;
            }
            else
            {
                spaces += 2;
                stars--;
            }
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