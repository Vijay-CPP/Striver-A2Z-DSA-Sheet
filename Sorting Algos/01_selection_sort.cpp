// Aim is to find the min val and swap with first elem

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void selectionSort(int arr[], int n)
    {
       for(int i=0; i<n-1; i++)
	    {
	        int minIndex = i;
	        
            // Finding min index
	        for(int j=i+1; j<n; j++)
            {
	            if(arr[j] < arr[minIndex])
	                minIndex = j;
            }
            
            swap(arr[i], arr[minIndex]);
	    }
    }
};

int main()
{
    return 0;
}