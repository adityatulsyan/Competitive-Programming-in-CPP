#include<bits/stdc++.h> 
using namespace std;
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
        int count;
        cin >> count;
        rep(i, 1, count){
            int r, g, b, w;
            string ans = "No";
            cin >> r >> g >> b >> w;
            int oddCount= r%2 + g%2 + b%2 + w%2;
            if(oddCount == 0 || oddCount == 1) ans = "Yes";
            else{
                int m = min(r, min(g, b));
                rep(i, 1, min(2, m)){
                    r = r-1, g = g-1, b = b-1; w = w+3;
                    oddCount= r%2 + g%2 + b%2 + w%2;
                    if(oddCount == 0 || oddCount == 1) 
                    {    
                        ans = "Yes";
                        break;
                    }    
                }    
            }
            cout << ans << ln;
        }
}

