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

main()
{  
    IOS;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        int len;
        cin >> len;
        vector<pair<int, int>> vec; 
        int a, b;
        rep(i, 1, len){
            cin >> a >> b;
            vec.pb(mk(a, b));
        }

        sort(vec.begin(), vec.end());
        bool flag = false;
        for(int i = 0; i < len-1; i++){
            if(vec[i+1].S < vec[i].S){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "Happy Alex";
        }
        else
            cout << "Poor Alex";
}
