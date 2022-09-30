// Complex code below but can be done in a simpler manner in cost of extra space

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0, right = s.length() - 1;

        while (left < right)
        {
            s[left] = tolower(s[left]);
            s[right] = tolower(s[right]);

            if (isalnum(s[left]) && isalnum(s[right]))
                if (s[left++] != s[right--])
                    return false;

            if (isalnum(s[left]) == false)
                left++;

            if (isalnum(s[right]) == false)
                right--;
        }

        return true;
    }
};

int main()
{

    return 0;
}