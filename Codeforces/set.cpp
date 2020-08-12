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
        set <char> s;
        s.insert('a');
        s.insert('v');
        s.insert('a');
        s.insert('t');
        s.insert('i');

        s.erase(s.find('a'));
        int len = s.size();
        for(auto it = s.begin(); it!=s.end(); it++){
            cout << *it << ws;
        }

        cout <<ln;
        cout << s.count('s') << ln;


        if(s.empty()){
            cout << "Not empty" << ln;
        }
        else
            cout << "Empty" << ln;




    #ifndef ONLINE_JUDGE
   	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
	#endif
	//return 0;

}