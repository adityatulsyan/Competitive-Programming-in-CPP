
#include <bits/stdc++.h>
using namespace std;

int maxCities(vector<vector<char>> &a, int n, int m);

void dfs(vector<vector<int>> &vec, vector<vector<bool>> &vis, int n, int m, int i, int j, int *count){
    //cout << i << " " << j << endl;
    (*count)++;
    vis[i][j] = true;
    if(i < n-1 && !vis[i+1][j] && vec[i+1][j]==1) dfs(vec, vis, n, m, i+1, j, count);               
    if(i > 0 && !vis[i-1][j] && vec[i-1][j] == 1) dfs(vec, vis, n, m, i-1, j, count);
    if(j > 0 && !vis[i][j-1] && vec[i][j-1] == 1) dfs(vec, vis, n, m, i, j-1, count);
    if(j < m-1 && !vis[i][j+1] && vec[i][j+1] == 1) dfs(vec, vis, n, m, i, j+1, count);
    if(i > 0 && j > 0 && !vis[i-1][j-1] && vec[i-1][j-1]) dfs(vec, vis, n, m, i-1, j-1, count);
    if(i < n-1 && j < m-1 && !vis[i+1][j+1] && vec[i+1][j+1]) dfs(vec, vis, n, m, i+1, j+1, count);
    if(i < n-1 && j > 0 && !vis[i+1][j-1] && vec[i+1][j-1]) dfs(vec, vis, n, m, i+1, j-1, count);
    if(i > 0 && j < m-1 && !vis[i-1][j+1] && vec[i-1][j+1]) dfs(vec, vis, n, m, i-1, j+1, count);

    return;
}
// Driver code to test above functions
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> a(n, vector<char>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }

        cout << maxCities(a, n, m) << "\n";
    }

    return 0;
} // } Driver Code Ends

int maxCities(vector<vector<char>> &a, int n, int m)
{
    vector<vector<int>> vec(n, vector<int>(m , 0));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    for(int i = 0; i < n; i++){
        for(int  j = 0; j < m; j++){
            if (a[i][j] == '*')
            {
                //cout << i << " " << j << endl;
                if(i < n-1 && a[i+1][j] == '.') vec[i+1][j] = 1;               
                if(i > 0 && a[i-1][j] == '.') vec[i-1][j] = 1;
                if(j > 0 && a[i][j-1] == '.') vec[i][j-1]= 1;
                if(j < m-1 && a[i][j+1] == '.') vec[i][j+1] = 1;
                if(i > 0 && j > 0 && a[i-1][j-1] == '.') vec[i-1][j-1] = 1;
                if(i < n-1 && j < m-1 && a[i+1][j+1] == '.') vec[i+1][j+1] = 1;
                if(i < n-1 && j > 0 && a[i+1][j-1] == '.') vec[i+1][j-1] = 1;
                if(i > 0 && j < m-1 && a[i-1][j+1] == '.') vec[i-1][j+1] = 1;
            }
        }
    }
    int count, ma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            count = 0;
            if(vec[i][j] == 1 && vis[i][j] == false){ 
                dfs(vec, vis, n, m, i, j, &count);
                ma = max(ma, count);
            }
        }
    }
    return ma;
    
}