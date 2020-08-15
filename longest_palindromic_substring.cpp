#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

// Given a string S, find the longest palindromic substring in S.

string palindromic(string s){
	int len = s.size();
	bool table[len][len];
	memset(table, false, sizeof(table));

	int m = 1; // m to store length of maximum length at the moment
	string ans = s.substr(0, m);
	
	//substring of length 1 are palindromic -- base case for odd length substring
	for(int i = 0; i <= len; i++){
		table[i][i] = true;
	}

	//checking for substring of length 2 -- base case for even length substring
	for(int i = 0; i < len-1; i++){
		if(s[i] == s[i+1]){
			m = 2;
			ans = s.substr(i, m);
			table[i][i+1] = true;
		}
	}

	for(int k = 2; k <=len; k++){ // k is the length of the substring
		for(int i = 0; i < len+1-k; i++){ //i is the starting index of the substring
			int j = i+k-1; // j is the last index of the substring

			if(table[i+1][j-1] && s[i] == s[j]){
				table[i][j] = true;
				if(k > m){
					m = k;
					ans = s.substr(i, m);
				}
			}
		}
	}
	return ans;
}

int main(){
	IOS;
	string s;
	cin >> s;
	string ans = palindromic(s);
	cout << ans << "\n";
	return 0;
}

