#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evenlyDivides(int N)
    {
        int count = 0;
        int num = N;

        while (num > 0)
        {
            int digit = num % 10;
        
            if (digit != 0 && N % digit == 0)
                count++;
        
            num = num / 10;
        }

        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}