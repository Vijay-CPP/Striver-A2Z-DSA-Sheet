#include <bits/stdc++.h>
using namespace std;
#define v vector

class Solution
{
public:
    string largestOddNumber(string num)
    {

        int i = num.length() - 1;

        while (i >= 0)
        {
            if ((num[i] - '0') % 2 == 1)
                return num.substr(0, i + 1);

            i--;
        }

        return "";
    }
};

int main()
{

    return 0;
}