#include<bits/stdc++.h> 
using namespace std;
#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
#define F first
#define S second
#define pb emplace_back
#define M 1000000007
#define watch(x) cout << (#x) << " is " << (x) << endl
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep(i,a,b) for(int i = a; i<= b; i++)
#define all(c) c.begin(), c.end()
#define ws " "
#define ln "\n"
#define get(x) int x; cin >> x;
#define prt printf("hello world\n")


main()
{	
	IOS;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        int len;
        cin >> len;
        vector<int> vec;
        int temp;
        rep(i, 1, len){
            cin >> temp;
            vec.pb(temp);
        }

        auto it = vec.begin();
        vec.insert(it, -1);
        cout << "Is vector empty?? " << ln;
        cout << vec.empty() << ln;
        vec.pop_back();
        cout << "first element of the vector: " << vec.front() << ln;
        rep(i, 1, vec.size()){
            cout << vec[i-1] << ws;
        }
        vec.clear();

        cout << "Is vector empty?? " << ln;
        cout << vec.empty() << ln;



    #ifndef ONLINE_JUDGE
   	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
	#endif
	//return 0;

}