#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        char ch = 'A';

        for (int i = 1; i <= n; i++)
        {
            // Loop & print the same letter
            for (int j = 1; j <= i; j++)
                cout << ch;

            cout << '\n';

            // Update for next line
            ch++;
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