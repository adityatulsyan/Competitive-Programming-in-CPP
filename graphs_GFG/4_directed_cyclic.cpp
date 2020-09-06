// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool checkCyclic(vector<int> g[], int V, vector<bool> &vis, int i)
{
    if (vis[i] == true)
        return true;

    vis[i] = true;
    vector<int> temp = g[i];
    for (auto u : temp)
    {
        if (checkCyclic(g, V, vis, u))
            return true;
    }
    vis[i]= false;
    return false;
}

bool isCyclic(int V, vector<int> g[])
{
    vector<bool> vis(V, false);
    bool ans = false;
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            ans = checkCyclic(g, V, vis, i);
            if (ans)
                return ans;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int v, e;
        cin >> v >> e;

        vector<int> adj[v];

        for (int i = 0; i < e; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        cout << isCyclic(v, adj) << endl;
    }

    return 0;
} // } Driver Code Ends