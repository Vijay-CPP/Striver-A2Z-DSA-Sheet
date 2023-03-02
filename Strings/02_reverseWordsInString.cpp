#include <bits/stdc++.h>
using namespace std;
#define v vector

class Solution
{
public:
    string reverseWords(string s)
    {
        string str = "";
        stack<string> st;
        bool isStartingSpace = true;

        for (int i = 0; i < s.length(); ++i)
        {
            // to avoid starting spaces
            if (s[i] == ' ' && isStartingSpace)
                continue;

            // to segregate word
            if (s[i] != ' ')
            {
                str = str + s[i];
                isStartingSpace = false;
            }

            // after encounting space push to stack
            if (s[i] == ' ' && s[i] != s[i - 1])
            {
                st.push(str);
                str = "";
            }
        }

        // if at last we don't find any space then last word can be pushed into stack
        if (str.length() > 0)
            st.push(str);

        string result = ""; // to store final reversed result

        while (!st.empty()) // pop, conctenate with space and store
        {
            result = result + st.top();
            st.pop();

            if (!st.empty())
                result += " ";
        }

        return result;
    }
};

int main()
{

    return 0;
}