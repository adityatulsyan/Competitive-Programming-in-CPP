// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>>, int, int);

int printSolution(vector<int> dist, int n)
{

    for (int i = 0; i < n; i++)
        printf("%d ", dist[i]);
}
int main()
{
    int t;
    int V;
    cin >> t;
    while (t--)
    {
        cin >> V;

        vector<vector<int>> g(V);

        for (int i = 0; i < V; i++)
        {
            vector<int> temp(V);
            g[i] = temp;
        }

        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                cin >> g[i][j];
            }
        }

        int s;
        cin >> s;
        // int i = 0;
        // for(auto u: g){
        //     cout << i << ": ";
        //     i++;
        //     for(auto i: u){
        //         cout << i << " ";
        //     }
        //     cout << endl;
        // }
        vector<int> res = dijkstra(g, s, V);
        printSolution(res, V);
        cout << endl;
    }
    return 0;
} 

vector<int> dijkstra(vector<vector<int>> g, int src, int V)
{
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;
    priority_queue<pair<int, int>> q;
    q.push({0, src});
    vector<int> visited(V, false);
    while(!q.empty()){
        pair<int, int> temp = q.top();
        int curr = temp.second;
        q.pop();
        if(visited[curr]) continue;
        visited[curr] = true;
        vector<int> vec = g[curr];
        for(int i = 0; i < V; i++){
            if(i != curr && vec[i] != 0){
                if(dist[i] > dist[curr]+vec[i]){
                    dist[i] = dist[curr]+vec[i];
                    q.push({-(dist[i]), i});
                }
            }
        }
    }
    return dist;
}