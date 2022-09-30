#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printSquare(int n)
    {
        // Repetetive numbers
        int innerLimit = 2 * n - 1;

        // Changing changing
        int outerLimit = 0;

        for (int i = 1; i <= 2 * n - 1; i++)
        {
            int num = n;
            for (int j = 1; j <= outerLimit; j++)
                cout << num-- << " ";

            for (int j = 1; j <= innerLimit; j++)
                cout << num << " ";

            for (int j = 1; j <= outerLimit; j++)
                cout << ++num << " ";

            if (i < n)
            {
                outerLimit++;
                innerLimit -= 2;
            }
            else
            {
                outerLimit--;
                innerLimit += 2;
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