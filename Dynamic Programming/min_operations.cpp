#include<bits/stdc++.h>
using namespace std;
//Link to question: https://practice.geeksforgeeks.org/problems/max-length-chain/1 
int main(){
    int count;
    cin >> count;
    while(count--){
        int n;
        cin >> n;
        int oper = 0;
        while(n){
            if(n%2){
                n--;
                oper++;
            }

            else{
                n = n/2;
                oper++;
            }
        }
        cout << oper;
    }
}