#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int vertices, edges;
vector<int> floyd_warshall(int *adj[vertices]){

    for(int k = 1; k <= v; k++){
        for(int i = 1; i <= v; i++){
            for(int j = 1; j <= v; j++){
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }
}
int main(){
    cin >> edges >> vertices;
    int adj[vertices+1][vertices+1];
    memset(adj, sizeof(adj), 0);
    int a, b, w;
    for(int i = 0; i < edges; i++){
        cin >> a >> b >> w;
        adj[a][b] = w;
        adj[b][a] = w;
    }

    floyd_warshall(vertices+1, adj);
}