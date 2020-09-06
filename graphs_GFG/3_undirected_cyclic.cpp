// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

/* This function is used to detect a cycle in undirected graph

*  g[]: array of vectors to represent graph
*  V: number of vertices
*/
bool checkCyclic(vector<int> g[], int V, vector<bool> &vis, int i, int parent)
{
    if(vis[i] == true) return true;

    vis[i] = true;
    vector<int> temp = g[i];
    for(auto u: temp){
        if(parent != u && checkCyclic(g, V, vis, u, i)) return true;
    }
    return false;
}

bool isCyclic(vector<int> g[], int V)
{
    vector<bool> vis(V, false);
    bool ans = false;
    for(int i = 0; i < V; i++){
        if(!vis[i]){
            ans = checkCyclic(g, V, vis, i, -1);
            if(ans) return ans;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int V, E;
        cin >> V >> E;

        // array of vectors to represent graph
        vector<int> adj[V];

        int u, v;
        for (int i = 0; i < E; i++)
        {
            cin >> u >> v;

            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V) << endl;
    }
}
// } Driver Code Ends