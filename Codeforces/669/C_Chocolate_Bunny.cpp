#include <bits/stdc++.h>
using namespace std;
#define int long long
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
#define get(x) int x; cin >> x;
#define prt printf("hello world\n")
#define MOD 1e16 + 7;
#define pi atan(1) * 4;

main()
{
    int n, l, r;
    cin >> n;
    vector<int> ans(n+1, 0);
    int i = n, j = 1, k = 2;
    while(n--)
    {   if(j > k){
        
    }
        cout << "?" << ws << j << ws << k << endl;
        cin >> l;
        cout << "?" << ws << k << ws << j << endl;
        cin >> r;
        if (l > r){
            ans[j] = l;
            if(j < k) j = k+1;
            else j++;
        }
        else{
            ans[k] = r;
            if(j > k) k = j+1;
            else k++;
        }
    }
    cout << "! ";
    for(auto u: ans){
        if(u == 0) continue;
        cout << u << " ";
    }
    cout << endl;

}