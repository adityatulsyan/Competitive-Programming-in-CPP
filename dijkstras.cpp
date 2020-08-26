#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int dijkstras(vector<vector<pair<int, int>>> &vec, int v)
{
    vector<int> dist(v+1, INT_MAX);
    dist[1] = 0;
    vector<int> visited(v+1, 0);
    priority_queue<pair<int, int>> q;
    q.push({0, 1});
    while(!q.empty()){
        int a = q.top().second;
        q.pop();
        if(visited[a]) continue;
        visited[a] = 1;
        for(auto u: vec[a]){
            int b = u.first, w = u.second;
            if(dist[a]+w < dist[b]){
                dist[b] = dist[a]+w;
                q.push({-dist[b], b});
            }
        }
    }
    return dist[v];
}
int main(){
    int edges, vertices; //Number of edges and vertices
    cin >> vertices >> edges;
    vector<vector<pair<int, int>>> vec(vertices+1);
    int a, b, w;
    for(int i = 0; i < edges; i++){
        cin >> a >> b >> w;
        //Undirected graph
        vec[a].push_back(make_pair(b, w));
        vec[b].push_back(make_pair(a, w));
    }

    int ans = dijkstras(vec, vertices);
    cout << ans << endl;
}