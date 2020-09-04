#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;
    while(count--){
        long long a, b;
        cin >> a >> b;
        long long temp = abs(b-a)/10;
        if(abs(b-a)%10 == 0) cout << temp << endl;
        else cout << temp+1 << endl;

    }
    return 0;
}