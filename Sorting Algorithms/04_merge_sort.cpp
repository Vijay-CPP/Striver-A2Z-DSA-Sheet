#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

class Solution
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        vector<int> sorted(r - l + 1);

        int i = l;
        int j = m + 1;
        int k = 0;

        while (i <= m && j <= r)
        {
            if (arr[i] <= arr[j])
                sorted[k++] = arr[i++];
            else
                sorted[k++] = arr[j++];
        }

        while (i <= m)
            sorted[k++] = arr[i++];

        while (j <= r)
            sorted[k++] = arr[j++];

        k = 0;
        for (int i = l; i <= r; i++)
            arr[i] = sorted[k++];
    }

    void mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int mid = l + (r - l) / 2;

            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);

            merge(arr, l, mid, r);
        }
    }
};

int main()
{
    int n, T, i;

    scanf("%d", &T);

    while (T--)
    {

        scanf("%d", &n);
        int arr[n + 1];
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        Solution ob;
        ob.mergeSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}
