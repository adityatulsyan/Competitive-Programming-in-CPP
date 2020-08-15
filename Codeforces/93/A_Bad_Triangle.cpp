#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main(){
    int count;
    cin >> count;
    for(int i = 0; i < count; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        if(arr[0]+arr[1] <= arr[n-1]) cout << 1 << " " << 2 << " " << n << ln;
        else cout << -1 << ln;
    }
}