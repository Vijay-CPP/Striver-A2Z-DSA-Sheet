//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    
    int convert(string str)
    {
        if(str.length() == 0)
            return 0;
        
        int n = str.length();
        return convert(str.substr(0, n-1)) * 10 + (str[n-1] - '0');
    }
    
    int atoi(string str) 
    {
        for(int i=0; i<str.length(); i++)
        {
            if(i==0 && str[i] == '-')
                continue;
            
            if(!isdigit(str[i]))
                return -1;
        }
        
        if(str[0] == '-')
            return -1 * convert(str.substr(1));
        
        return convert(str);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends