// Can be done using hashset
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int remove_duplicate(int a[], int n)
    {
        int i = 0;

        for (int j = 0; j < n; j++)
        {
            if (a[i] != a[j])
            {
                i++;
                a[i] = a[j];
            }
        }

        return i + 1;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        int n = ob.remove_duplicate(a, N);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}