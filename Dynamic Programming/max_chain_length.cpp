// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val
{
    int first;
    int second;
};

int maxChainLen(struct val p[], int n);
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        val p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first >> p[i].second;
        }

        cout << maxChainLen(p, n) << endl;
    }
    return 0;
} // } Driver Code Ends

/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
bool sortbysec(struct val a, struct val b)
{
    return a.second < b.second;
}
int maxChainLen(struct val a[], int n)
{
    int ans[n];
    int m = 1;
    ans[0] = 1;
    sort(a, a + n, sortbysec);
    for (int i = 1; i < n; i++)
    {
        int x = a[i].first, temp = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (x > a[j].second)
                temp = max(temp, ans[j]);
        }
        // cout << temp << " ";
        ans[i] = temp + 1;
        m = max(m, ans[i]);
    }
    return m;
    //Your code here
}