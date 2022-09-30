// It can be very easily done through loops

#include <bits/stdc++.h>
using namespace std;

void reverse(int left, int right, vector<int> &arr)
{
    if (left >= right)
        return;

    swap(arr[left], arr[right]);

    reverse(++left, --right, arr);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n, 0);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        reverse(0, n - 1, arr);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << "\n";
    }

    return 0;
}