#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printGfg(int N)
    {
        if (N == 0)
            return;

        cout << "GFG ";

        printGfg(N - 1);
    }
};

int main()
{
    int T;

    // taking testcases
    cin >> T;

    while (T--)
    {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printGfg(N);
        cout << "\n";
    }
    return 0;
}
