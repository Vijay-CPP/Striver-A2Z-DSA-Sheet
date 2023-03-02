#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // using stack
    string removeOuterParentheses(string s)
    {
        string ans;
        stack<char> st;

        for (auto x : s)
        {
            if (x == '(')
            {
                if (st.size() > 0)
                    ans.push_back(x);
                st.push(x);
            }
            else
            {
                st.pop();
                if (!st.empty())
                    ans.push_back(x);
            }
        }
        return ans;
    }

    // Without stack
    // string removeOuterParentheses(string s)
    // {
    //     string res;
    //     int count = 0;
    //     for (int i = 0; i < s.size(); i++)
    //     {
    //         if (s[i] == '(' && count == 0)
    //             count++;
    //         else if (s[i] == '(' && count >= 1)
    //         {
    //             res += s[i];
    //             count++;
    //         }
    //         else if (s[i] == ')' && count > 1)
    //         {
    //             res += s[i];
    //             count--;
    //         }
    //         else if (s[i] == ')' && count == 1)
    //             count--;
    //     }
    //     return res;
};

int main()
{

    return 0;
}