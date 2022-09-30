#include <bits/stdc++.h>
using namespace std;

// Recursive Approach will give TLE 1^3 + 2^3 + 3^3 ...

class Solution {
  public:
    long long sumOfSeries(long long N) {
        
        return (N*N*(N+1)*(N+1)) / 4;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}