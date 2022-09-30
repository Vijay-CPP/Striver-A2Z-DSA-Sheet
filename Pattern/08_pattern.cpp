#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {

        int spaces = 0;
        int stars = 2 * n - 1;

        for (int i = 1; i <= n; i++)
        {
            // Loop for Spaces
            for (int j = 1; j <= spaces; j++)
                cout << " ";

            // Loop for Stars
            for (int j = 1; j <= stars; j++)
                cout << "*";

            cout << "\n";

            // Update for next line
            spaces++;
            stars -= 2;
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