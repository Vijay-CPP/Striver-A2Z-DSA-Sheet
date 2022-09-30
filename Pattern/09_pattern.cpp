#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printDiamond(int n)
    {

        int stars = 1;
        int spaces = n - 1;
        int lines = 2 * n;

        for (int i = 1; i <= lines; i++)
        {
            // Loop for spaces
            for (int j = 1; j <= spaces; j++)
                cout << " ";

            // Loop for stars
            for (int j = 1; j <= stars; j++)
                cout << "* ";

            cout << "\n";

            // Update accordingly for next line
            if (i < n)
            {
                stars++;
                spaces--;
            }
            else if (i > n)
            {
                stars--;
                spaces++;
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
        ob.printDiamond(n);
    }
    return 0;
}