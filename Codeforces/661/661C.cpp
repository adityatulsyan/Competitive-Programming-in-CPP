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
        int count;
        cin >> count;
        for(int i = 0; i < count; i++){
            int len;
            cin >> len;
            vector<int> arr(len+1, 0);
            for(int i = 0; i < len; i++){
                int x;
                cin >> x;
                arr[x]++;
            }
            int ans = 0;
            for(int s = 2; s <= 2*len; s++){
                int curr = 0;
                for(int i = 1; i < (s+1)/2; i++){
                    if(s-i > len) continue;
                    curr = curr+min(arr[i], arr[s-i]);
                }
                if (s % 2 == 0) curr += arr[s / 2] / 2;
                ans = max(ans, curr);
            }
            cout << ans <<ln;
        }
}
