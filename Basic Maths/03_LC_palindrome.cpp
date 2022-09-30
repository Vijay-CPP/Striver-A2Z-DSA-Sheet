#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        long int rev = 0;
        int num = x;

        while (num > 0)
        {
            rev = rev * 10 + num % 10;
            num = num / 10;
        }

        if (rev == x)
            return true;
        else
            return false;
    }
};

int main()
{

    return 0;
}