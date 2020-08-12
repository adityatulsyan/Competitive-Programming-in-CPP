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
            string s; 
            cin >> s;
            vector<int> arr(len, 0);
            int num = 1;
            int lastOccured;
            int k = 0;
            while(k<len){
                if(arr[k] == 0){
                    bool check = true;
                    lastOccured = s[k]-'0';
                    arr[k] = num;
                    for(int j = k+1; j < len; j++){
                        if(lastOccured == 0 && arr[j] == 0 && s[j] == '1'){
                            arr[j] = num;
                            lastOccured = 1;
                        }

                        else if(lastOccured == 1 && arr[j] == 0 && s[j] == '0'){
                            arr[j] = num;
                            lastOccured = 0;
                        }

                        else if(arr[j] == 0 && check){
                            k = j;
                            check = false;
                        }
                    }
                    if (check)
                    {
                        k = len;
                    }
                    num++; 
                }
            }
            cout << num-1 << ln;
            for(int i = 0; i < len; i++){
                cout << arr[i] << " ";
            }
            cout << ln;
        }
}
