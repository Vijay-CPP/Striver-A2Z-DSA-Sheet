#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        int star = 1;
        int space = n - 1;

        for (int i = 1; i <= n; i++)
        {
            // Loop for spaces
            for (int j = 1; j <= space; j++)
                cout << " ";

            // Loop for star
            for (int j = 1; j <= star; j++)
                cout << "*";

            cout << endl;

            // Update for next line
            space--;
            star += 2;
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