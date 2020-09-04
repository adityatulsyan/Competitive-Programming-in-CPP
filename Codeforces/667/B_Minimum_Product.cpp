#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int count;
    cin >> count;
    while (count--)
    {
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        int a1 = a, b1 = b, n1 = n;
        //cout << endl << "dfklhgkl" << endl;
        int k = min(n, (a-x));
        a = a-k;
        n = n-k;
        k = min(n, b-y);
        b = b-k;
        n = n-k;
        k = min(n1, (b1 - y));
        b1 = b1-k;
        n1 = n1-k;
        k = min(n1, a1 - x);
        a1 = a1-k;

        cout << min(a*b, a1*b1) << endl;
#ifndef ONLINE_JUDGE
        cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    }
}