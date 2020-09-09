#include<bits/stdc++.h> 
using namespace std;
#define int long long
#include<algorithm>
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
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep(i,a,b) for(int i = a; i<= b; i++)
#define all(c) c.begin(), c.end()
#define ws " "
#define ln "\n"
#define get(x) int x; cin >> x;
#define prt printf("hello world\n")
#define MOD 1e16 + 7;
#define pi atan(1)*4;

main(){
    int count;
    cin >> count;
    while(count--){
        int n, z = 0, o = 0;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
            if(vec[i] == 0) z++;
            else o++;
        }
        
        if(z >= n/2){
            cout << n/2 << endl;
            for(int i = 1; i <= n/2; i++) cout << 0 << " ";
        }
        else{
            if(o%2) o--;
            cout << o << endl;
            for (int i = 1; i <= o; i++)
                cout << 1 << " ";
        }
        cout << endl;
    }
}