#include<bits/stdc++.h>
using namespace std;

int main(){
    int count;
    cin >> count;
    while(count--){
        //cout << "count: " << count << endl;
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }
        
        int amount;
        //cout << "Hello " << vec[0] << endl;
        cin >> amount;
        
        int ans[amount+1];
        ans[0] = 1;
        
        for(int i = 1; i <= amount; i++){
            ans[i] = 0;
            for(int j = 0; j < n; j++){
                if(i-vec[j] >= 0){
                    ans[i] += ans[i-vec[j]];
                }
            }
        }
        cout << ans[amount] << endl;
    }
    return 0;
}