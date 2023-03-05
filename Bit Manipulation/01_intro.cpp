//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void bitManipulation(int num, int i)
    {
        // your code here

        int mask = 1;
        mask = mask << (i - 1);

        int getBit = num & mask;
        int setBit = num | mask;
        int clearBit = num & (~mask);

        cout << (getBit != 0) << " " << setBit << " " << clearBit;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends