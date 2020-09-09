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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>> vec(n);
        int m = INT_MIN, temp, index;
        for(int i = 0; i < n; i++){
            cin >> temp;
            vec[i] = {temp, 1};
            m = max(m, temp);
            if(m == temp) index = i;
        }

        vec[index].second = -1;

        vector<int> ans;
        ans.push_back(m);
    
        int k, count = 1, res = m, num;
        while(count < n){
            k = INT_MIN;
            for(int i = 0; i < n; i++){
                if(vec[i].second == 1){
                    k = max(k, __gcd(res, vec[i].first));
                    if(k == __gcd(res, vec[i].first)) index = i;
                }
            }
            ans.push_back(vec[index].first);
            vec[index].second = -1;
            res = k;
            count++;
        }

        for(auto u: ans) cout << u << " ";
        cout << endl;
    }
}