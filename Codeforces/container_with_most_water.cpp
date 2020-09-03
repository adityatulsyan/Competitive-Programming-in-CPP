#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];

	for(int i = 0; i < n; i++) cin >> arr[i];

	int lo = 0, hi = n-1;
	int ans = 0;
	while(lo <  hi){
		ans = max(ans, (min(arr[lo], arr[hi])*(hi-lo)));
		if(arr[lo] < arr[hi]) lo++;
		else hi--;
	}

	cout << ans << endl;
	return 0;
}

