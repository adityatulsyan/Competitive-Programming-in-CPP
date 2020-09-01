#include<bits/stdc++.h>
using namespace std;

int main(){
    int deno[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int k = 10;
    int n;
    cin >> n;
    int arr[n+1];
    map<int, vector<int>> mp;
    arr[0] = 0;
    mp[0] = {};
    for(int i = 1; i <= n; i++){
        arr[i] = INT_MAX;
        for(int j = 0;j < k; j++){
            if(i-deno[i] >= 0){
                if (arr[i] > arr[i - deno[i]] + 1){
                    mp[i].insert(mp[i].begin(), mp[i-deno[i]].begin(), mp[i-deno[i]].end());
                    mp[i].push_back(deno[j]);
                    arr[i] = arr[i-deno[i]]+1;
                }
                
            }
            else
                break;
        }
        
    }

    for(int i = 0; i < mp[n].size(); i++)
    cout << mp[n][i] << " ";

    return 0;
}