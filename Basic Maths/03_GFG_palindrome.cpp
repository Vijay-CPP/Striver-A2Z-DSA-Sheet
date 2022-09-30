#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string is_palindrome(int n)
    {
        int rev = 0;
        int num = n;

        while (num > 0)
        {
            rev = rev * 10 + num % 10;
            num = num / 10;
        }

        if (rev == n)
            return "Yes";
        else
            return "No";
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution ob;
        string ans = ob.is_palindrome(n);
        cout << ans << "\n";
    }
    return 0;
}
