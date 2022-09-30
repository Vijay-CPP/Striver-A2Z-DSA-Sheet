#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        
        int spaces = n-1;
        
        for(int i=1; i<=n; i++)
        {
            // Loop for spaces
            for(int j=1; j<=spaces; j++)
                cout<<" ";
            
            char ch = 'A';
            
            // Loop for forward half
            for(int j=1; j<=i; j++)
                cout<<ch++;
            
            ch -= 2;
            
            // Loop for reverse half
            for(int j=1; j<=i-1; j++)
                cout<<ch--;
                
            cout<<"\n";

            // Update for next line
            spaces--;
        }
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}