#include<bits/stdc++.h>
using namespace std;

int main(){
    int count;
    cin >> count;
    while(count--){
        int floors, eggs;
        cin >> eggs >> floors;
        int table[eggs+1][floors+1];
        for(int i = 0; i <= eggs; i++){
            table[i][0] = 0;
            table[i][1] = 1;
        }
        for(int j = 0; j <= floors; j++) {
            table[0][j] = 0;
            table[1][j] = j;
        }
        for(int i = 2; i <= eggs; i++){
            for(int j = 2; j <= floors; j++){
                table[i][j] = INT_MAX;
                for(int k = 1; k <= j; k++){
                    table[i][j] = min(max(table[i-1][k-1], table[i][j-k])+1, table[i][j]);
                }
            }
        }
        cout << table[eggs][floors] << endl;
    }
    return 0;
}