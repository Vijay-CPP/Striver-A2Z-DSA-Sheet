#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Find position and shift elements and place there

class Solution
{
public:
    void insertionSort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            int j = i - 1;
            int curr = arr[i];

            while (j >= 0 && arr[j] > curr)
            {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = curr;
        }
    }
};

int main()
{
    return 0;
}
