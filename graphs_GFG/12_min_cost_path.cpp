#include<bits/stdc++.h>
using namespace std;

// bool dfs(vector<vector<int>> &vec, vector<vector<bool>> &vis, int i, int j){
//     vis[i][j] = true;
//     if(vec[i][j] == 2) return true;

//     bool temp = false;
//     if(i > 0 && vis[i-1][j] == false && (vec[i-1][j] == 3 || vec[i-1][j] == 2) && !temp) temp = dfs(vec, vis, i-1, j);
//     if(j > 0 && vis[i][j-1] == false && (vec[i][j-1] == 3 || vec[i][j-1] == 2) && !temp) temp = dfs(vec, vis, i, j-1);
//     if(i < vis.size()-1 && vis[i+1][j] == false && (vec[i+1][j] == 3 || vec[i+1][j] == 2) && !temp) temp = dfs(vec, vis, i+1, j);
//     if(j < vis[0].size()-1 && vis[i][j+1] == false & (vec[i][j+1] == 3 || vec[i][j+1] == 2) && !temp) temp = dfs(vec, vis, i, j+1);
    
//     if(temp) return true;
//     vis[i][j] = false;
//     return false;
// }
int main(){
    int count;
    cin >> count;
    while(count--){
        int n, x = -1, y = -1;
        cin >> n;
        vector<vector<int>> vec(n, vector<int>(n));
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        for(int i = 0; i < n; i++){
            for(int j  =0; j < n; j++){
                cin >> vec[i][j];
            }
        }
        // cout << dfs(vec, vis, x, y) << endl;

        queue<pair<int, int>> q, pq;
        q.push({0, 0});
        int ans, res = 0;

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            ans = INT_MAX;
            while(!q.empty()){
                ans = min(ans, vec[x][y]);
                if(x < n-1) pq.push({x+1, y});
                if(y < n-1) pq.push({x, y+1});
                if(x > 0) pq.push({x-1, y});
                if(y > 0) pq.push({x, y-1});
            }
            while(!pq.empty()){
                q.push(pq.front());
                pq.pop();
            }
            res = res+ans;
        }
        cout << res << endl;
    }
    return 0;
}