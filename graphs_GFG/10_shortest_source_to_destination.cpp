#include<bits/stdc++.h>
using namespace std;

int main(){
    int count;
    cin >> count;
    while(count--){
        int r, c;
        cin >> r >> c;
        vector<vector<int>> vec(r, vector<int>(c));
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> vec[i][j];
            }
        }
        vector<vector<bool>> vis(r, vector<bool>(c, false));
        int res = INT_MAX;
        queue<pair<int, int>> q;
        if(vec[0][0] == 0){
            cout << -1 << endl;
            continue;
        }
        int ans = 0;
        q.push({0, 0});
        while(!q.empty()){
            pair<int, int> p = q.front();
            int x = p.first, y = p.second;
            //cout << "x, y: " << x << " " << y << endl;
            ans++;
            queue<pair<int, int>> pq;
            while(!q.empty()){
                q.pop();
                //int x = pq.front().first, y = pq.front().second;
                vis[x][y] = true;
                if(x < r-1 && vec[x+1][y] == 1 && vis[x+1][y] == false) pq.push({x+1, y});
                if(y < c-1 && vec[x][y+1] == 1 && vis[x][y+1] == false) pq.push({x, y+1});
                if(x > 0 && vec[x-1][y] == 1 && vis[x-1][y] == false) pq.push({x-1, y});
                if(y > 0 && vec[x][y-1] == 1 && vis[x][y-1] == false) pq.push({x, y-1});
            }
            while(!pq.empty()){
                q.push(pq.front());
                pq.pop();
            }
            if(x == r-1 && y == c-1) break;
            res = ans;
        }
        if(res > 0) cout << res << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}