/*	Question: Form a palindrome
	Link: https://practice.geeksforgeeks.org/problems/form-a-palindrome/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int miniInsertion(string s, int n){
	int table[n][n], gap, l, h;
	
	memset(table, 0, sizeof(table));
	
	for(gap=1; gap<n; ++gap){
		for(l=0, h=gap; h<n; l++, h++){
			table[l][h] = (s[l]==s[h]) ? table[l+1][h-1] : (min(table[l][h-1], table[l+1][h]) + 1);
		}
	}
	return table[0][n-1];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		cout<<miniInsertion(s, s.length())<<endl;
		
	}
	return 0;
}
