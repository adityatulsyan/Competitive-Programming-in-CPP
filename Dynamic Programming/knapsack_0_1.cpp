#include<bits/stdc++.h>
using namespace std;

int main(){
    int count;
    cin >> count;

    while(count--){
        int n;
        cin >> n;
        int capacity;
        cin >> capacity;
        vector<int> wt, v;
        int temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            v.push_back(temp);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            wt.push_back(temp);
        }

        int arr[n+1][capacity];

        for(int i = 0; i <= n; i++){
            for(int j = 0; j<= capacity; j++){
                if(i == 0 || j == 0) arr[i][j] = 0;

                else if(j-wt[i-1] >= 0){
                    arr[i][j] = max(arr[i-1][j-wt[i-1]]+v[i-1], arr[i-1][j]);
                }

                else arr[i][j] = arr[i-1][j];
            }
        }
        cout << endl << "ans: " << arr[n][capacity] << endl;
    }
    return 0;
}