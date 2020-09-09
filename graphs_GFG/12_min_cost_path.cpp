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
        int n, x, y;
        cin >> n;
        vector<vector<int>> vec(n, vector<int>(n));
        vector<vector<int>> vis(n, vector<int>(n, INT_MAX));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> vec[i][j];   
            }
        }
        // cout << dfs(vec, vis, x, y) << endl;

        queue<pair<pair<int, int>, int>> q, pq;
        q.push({{0, 0}, 0});
        int val, res = 0, rem = 0;

        while(!q.empty()){
            int x = q.front().first.first;
            int y = q.front().first.second;
            val = q.front().second;
            q.pop();
            if (val + vec[x][y] < vis[x][y])
                vis[x][y] = val + vec[x][y];
            else continue;
            if(x < n-1) q.push({{x+1, y}, vis[x][y]});
            if(y < n-1) q.push({{x, y+1}, vis[x][y]});
            if(x > 0) q.push({{x-1, y}, vis[x][y]});
            if(y > 0) q.push({{x, y-1}, vis[x][y]});
        }

        // for(auto u: vis){
        //     for(auto it: u) cout << it << " ";
        //     cout << endl;
        // }
        cout << "\n" << vis[n-1][n-1] << endl;
    }
    return 0;
}