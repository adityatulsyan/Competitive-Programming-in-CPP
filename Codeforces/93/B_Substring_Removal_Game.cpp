#include<bits/stdc++.h>
using namespace std;
int main(){
    int count;
    cin >> count;
    for(int k = 0; k < count; k++){
        string s;
        cin >> s;
        int len = s.size();
        int i = 0;
        priority_queue<int> pq;
        while(i < len){
            int count = 0;
            while(i < len && s[i] == '1'){
                count++;
                i++;
            }
            if(count != 0) pq.push(count);
            i++;
        }
        int ans = 0;
        while(!pq.empty()){
            ans = ans + pq.top();
            pq.pop();
            if(!pq.empty()) pq.pop();
        }
        cout << ans << endl;
    }
}