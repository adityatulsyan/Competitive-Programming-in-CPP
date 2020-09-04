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
#define get(x) int x;  cin >> x;
#define prt printf("hello world\n")
#define MOD 1e16 + 7;
#define pi atan(1) * 4;
main()
{
    int count;
    cin >> count;
    while (count--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int k = n-1, d, q;
        if((b-a)%k == 0) d = (b-a)/k;
        else{
            while(((b-a)%k) && (b-a)/k){
                k--;
            }
            d = (b-a)/k;
        }
        int a1 = a, c = 1;
        while(a1 <= b){
            cout << a1 << " ";
            a1 = a1+d;
            c++;
        }
        a = a - d;
        while(c <= n && a > 0){
            cout << a << " ";
            a = a-d;
            c++;
        }
        b = b+d;
        while(c <= n){
            cout << b << " ";
            b = b+d;
            c++;
        }
        cout << ln;
    }
}