#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        int stars = 1;
        int lines = 2 * n - 1;

        for (int i = 1; i <= lines; i++)
        {
            // Loop for stars
            for (int j = 1; j <= stars; j++)
                cout << "* ";

            cout << '\n';

            // update for next line
            if (i < n)
                stars++;
            else
                stars--;
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