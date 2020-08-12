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
        int A;
        cin >> A;
    vector<vector<int>> vec(A);
    vec[0] = {1};
    vec[1] = {1,1};
    cout << "hello";
    for(int i = 2; i < A; i++){
        cout << "hello";
        vector<int> temp(i+1);
        temp[0] = 1, temp[i] = 1;
        for(int j = 1; j < i; j++ ){
            cout << "hello";
            temp[j] = vec[i-1][j-1]+vec[i-1][j];
        }
        vec.push_back(temp);
    }

}

