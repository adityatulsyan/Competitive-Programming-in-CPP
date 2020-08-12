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

        map<char, int> mp;
        mp.insert(pair<char, int>('a', 1));
        mp.insert(pair<char, int>('b', 2));
        mp.insert(pair<char, int>('f', 3));
        mp.insert(pair<char, int>('d', 4));
        mp.insert(pair<char, int>('e', 5));
        mp['t'] = 5;
        mp.erase('c');
        cout << mp.find('h')->second << ln;


        for(auto it = mp.begin(); it != mp.end(); it++){
            cout << it->first << ws << it->second << ln;
        }


    #ifndef ONLINE_JUDGE
   	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
	#endif
	//return 0;

}