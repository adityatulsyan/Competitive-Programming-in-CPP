#include<bits/stdc++.h>
using namespace std;
#define int long long
main(){
    int count;
    cin >> count;
    for(int i = 0; i < count; i++){
        int n; string s;
        cin >> n >> s;
        int arr[n];

        for(int i = 0; i < n; i++){
            int temp = s[i]-'0';
            arr[i] = temp-1;
        }

        map<int, int> mp;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            mp[sum]++;
        }
        int ans = 0;
        for(auto i:mp){
            if(i.first == 0) ans += i.second + i.second*(i.second-1)/2;

            else
                ans += i.second * (i.second - 1) / 2;
        }
        cout << ans << endl;
    }
}