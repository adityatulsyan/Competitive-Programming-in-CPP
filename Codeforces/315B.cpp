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
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        int increase = 0;
        rep(i, 1, n){
            cin >> arr[i-1];
        }
        int a, b, c;
        rep(i, 1, m){
            cin >> a >> b;
            if(a == 1){
                cin >> c;
                arr[b-1] = c-increase;
            }

            else if(a == 2){
                increase += b;
            }

            else{
                cout << arr[b-1]+increase << endl;
            }
        }
}
