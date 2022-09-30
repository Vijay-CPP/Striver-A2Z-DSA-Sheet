#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        for (int i = n; i >= 1; i--)
        {
            char ch = 'A';

            // Loop from A
            for (int j = 1; j <= i; j++)
                cout << ch++;

            cout << '\n';
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