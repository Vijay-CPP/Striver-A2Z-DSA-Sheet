// Aim is to put largest at the end by swapping with consecutive two elements

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool sorted = true;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                sorted = false;
            }
        }

        // To avoid unnecessary looping
        if (sorted)
            break;
    }
}

int main()
{

    return 0;
}