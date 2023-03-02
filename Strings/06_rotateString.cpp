#include <bits/stdc++.h>
using namespace std;
#define v vector

class Solution
{
public:
    bool rotateString(string s, string goal)
    {

        if (s.length() != goal.length())
            return false;

        for (int i = 0; i < s.length(); i++)
        {
            string rotated = s.substr(1) + s[0];
            s = rotated;

            if (rotated == goal)
                return true;
        }

        return false;
    }
};

int main()
{

    return 0;
}