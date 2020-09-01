#include<bits/stdc++.h>
using namespace std;

int main(){
    int count;
    cin >> count;

    while(count--){
        int n;
        cin >> n;
        vector<int> vec(n);

        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }

        int ans[n];
        int result = 0;
        for(int i = 0; i < n; i++){
            int temp = 0;
            for(int j = 0; j < i; j++){
                if(vec[i] > vec[j]) temp = max(temp, ans[j]);
            }
            ans[i] = temp+1;
            result = max(ans[i], result);
        }
        cout << result << endl;
    }
    return 0;
}