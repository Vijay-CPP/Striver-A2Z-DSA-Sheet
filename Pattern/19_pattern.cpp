#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        int stars = n;
        int spaces = 0;

        for (int i = 1; i <= 2 * n; i++)
        {
            for (int j = 1; j <= stars; j++)
                cout << "*";

            for (int j = 1; j <= spaces; j++)
                cout << "  ";

            for (int j = 1; j <= stars; j++)
                cout << "*";

            cout << "\n";

            if (i < n)
            {
                stars--;
                spaces++;
            }
            else if (i > n)
            {
                spaces--;
                stars++;
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
