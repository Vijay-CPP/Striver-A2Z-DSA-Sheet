#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printSquare(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == n)
                for (int j = 1; j <= n; j++)
                    cout << "*";
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || j == n)
                        cout << "*";
                    else
                        cout << " ";
                }
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
        ob.printSquare(n);
    }
    return 0;
}