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
        int max = 0, maxi = -1;
        int min = INT_MAX, mini = -1;
        int arr[len];
        for(int i = 0; i < len; i++){
            cin >> arr[i];
            if(arr[i] > max){
                max = arr[i];
                maxi = i;
            }

            if(arr[i] <= min){
                min = arr[i];
                mini = i;
            }
        }

        int ans;
        if(mini < maxi){
            ans = maxi + len - mini - 2;
        }
        else{
            ans = maxi + len - mini - 1;
        }

        cout << ans << ln;
}
