#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
#define F first
#define S second
#define pb push_back
#define mk make_pair
#define M 1000000007
#define watch(x) cout << (#x) << " is " << (x) << endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define all(c) c.begin(), c.end()
#define ws " "
#define ln "\n"
#define get(x) int x;  cin >> x;
#define prt printf("hello world\n")
#define MOD 1e16 + 7;
#define pi atan(1) * 4;

main(){
    int count;
    cin >> count;
    while(count--){
        long long n;
        int s;
        
        cin >> n >> s;
        string str = to_string(n);
        int len = str.size();
        
        int temp = 0;
        int d = 0;
        for(int i = 0; i < len; i++) d += str[i]-'0';
        if(d == s) {
            cout << 0 << endl;
            continue;
        }
        int i = 0;
        while(i < len && temp+str[i]-'0' < s){
            
            temp += str[i] - '0';
            i++;
        }
        // if(i == len-1 && temp == s) {
        //     cout << 0 << endl;
        //     continue;
        // }
        //int num = n % (powl(10, len-i));
        if(i == len){
            cout << 0 << endl;
            continue;
        }
        string st = str.substr(i, len-i);
        long long x = stoll(st);
        long long c = pow(10, len-i);
        cout << c-x << ln; 
    }
}