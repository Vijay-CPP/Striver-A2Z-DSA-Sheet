#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=5, b=8;    

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<a<<" "<<b;

    return 0;
}