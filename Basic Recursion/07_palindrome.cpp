#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	

// TLE Recursive Code
// 	bool helper(int left, int right, string s)
// 	{
// 	    if(left >= right)
// 	        return true;
	    
// 	    if(s[left] != s[right])
// 	        return false;
	    
// 	    return helper(++left, --right, s);
// 	}
	
	int isPalindrome(string S)
	{
	   // return helper(0, S.length()-1, S);
	   
	   for(int i=0; i<S.length()/2; i++)
	   {
	       if(S[i] != S[S.length()-i-1])
	           return 0;
	   }
	   
	   return 1;
	}

};

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}