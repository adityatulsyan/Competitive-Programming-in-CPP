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
        rep(i, 1, count){
            int len;
            cin >> len;
            int arr[len];
            rep(i, 1, len){
                cin >> arr[i-1];
            }

            sort(arr, arr+len);
            bool flag = true;
            for(int i = 0; i < len-1; i++){
                if(arr[i+1]-arr[i] > 1){
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }

            if(flag) cout << "YES" << ln;
        }
}
