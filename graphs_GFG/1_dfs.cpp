// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
void dfsTraversal(vector<int> g[], int i, bool *vis, vector<int>  &ans){
    ans.push_back(i);
    vis[i] = true;

    if(g[i].empty()) {
        vis[i] = true;
        ans.push_back(i+1);
        return;
    }

    vector<int> temp = g[i];
    for(auto u: temp){
        if(!vis[u]) dfsTraversal(g, u, vis, ans);
    }
    return;
}

vector<int> dfs(vector<int> g[], int N)
{
    bool vis[N];
    memset(vis, false, sizeof(vis));
    vector<int> ans;
    dfsTraversal(g, 0, vis, ans);
    return ans;
    // Your code here
}

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int N, E;
        cin >> N >> E;

        vector<int> g[N];
        bool vis[N];

        memset(vis, false, sizeof(vis));

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<int> res = dfs(g, N);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
} // } Driver Code Ends