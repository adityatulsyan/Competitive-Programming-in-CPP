// { Driver Code Starts
// C++ program to find minimum number of swaps
// required to sort an array
#include <bits/stdc++.h>
using namespace std;

int minSwaps(int A[], int N);

// Driver program to test the above function
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << minSwaps(a, n) << endl;
    }
}

// } Driver Code Ends

/* You are required to complete this method */

// return the minimum number of swaps required to sort the arra
int minSwaps(int arr[], int N)
{
    vector<pair<int, int>> vec(N);

    for(int i = 0; i < N; i++){
        vec[i] = {arr[i], i};
    }
    int ans = 0;
    sort(vec.begin(), vec.end());
    vector<bool> vis(N, false);
    for(int i = 0; i < N; i++){
        if(vis[i] || vec[i].second == arr[i]) continue;
        int j, count = 0;
        //vis[i] = true;
        while(!vis[i]){
            vis[i] = true;
            j = vec[i].second;
            i = j;
            count++;
        }
        if(count) ans += count-1;
    }
    return ans;
}