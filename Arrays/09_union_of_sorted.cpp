// If the arrays are not sorted then hashmap or set is best

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr1,arr2 : the arrays
    //  n, m: size of arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i = 0, j = 0; // pointers
        vector<int> un;

        while (i < n && j < m)
        {
            if (arr1[i] == arr2[j])
            {
                if (un.size() == 0 || un.back() != arr1[i])
                    un.push_back(arr1[i]);
                i++;
                j++;
            }
            else if (arr1[i] < arr2[j])
            {
                if (un.size() == 0 || un.back() != arr1[i])
                    un.push_back(arr1[i]);
                i++;
            }
            else
            {
                if (un.size() == 0 || un.back() != arr2[j])
                    un.push_back(arr2[j]);
                j++;
            }
        }

        while (i < n)
        {
            if (un.size() == 0 || un.back() != arr1[i])
                un.push_back(arr1[i]);

            i++;
        }

        while (j < m)
        {
            if (un.size() == 0 || un.back() != arr2[j])
                un.push_back(arr2[j]);

            j++;
        }

        return un;
    }
};

//{ Driver Code Starts.

int main()
{

    int T;
    cin >> T;

    while (T--)
    {

        int N, M;
        cin >> N >> M;

        int arr1[N];
        int arr2[M];

        for (int i = 0; i < N; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < M; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        vector<int> ans = ob.findUnion(arr1, arr2, N, M);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends