#include<bits/stdc++.h>
using namespace std;

int main(){
    int count;
    cin >> count;

    while(count--){
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int table[n+1][m+1];
        int ans = 0;
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(i == 0 || j == 0) table[i][j] = 0;

                else if(a[i-1] == b[j-1]) table[i][j] = table[i-1][j-1]+1;

                else table[i][j] = 0;

                ans = max(ans, table[i][j]);
            }
        }
        cout << ans << endl;
    }
    return
}