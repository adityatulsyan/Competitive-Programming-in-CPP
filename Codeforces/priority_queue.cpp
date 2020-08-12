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

        priority_queue<int> pq;
        int temp;
        rep(i, 1, 8){
            cin >> temp;
            cout << temp << ws;
            pq.push(temp);
        }

        cout << ln;

        while(!pq.empty()){
            cout << pq.top() << ws;
            pq.pop();

        }
	//return 0;

}