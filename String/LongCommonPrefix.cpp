/*	Question: Longest Common Prefix in an Array
	Link: https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string helper(string s1, string s2){
	string result;
	
	for(int i=0, j=0; i<s1.length() && j<s2.length(); i++, j++){
		if(s1[i]!=s2[j])
			break;
		
		result.push_back(s1[i]);
	}
	return result;
}
string commonPrefix(string s[], int si, int ei){
	if(si==ei){
		return s[si];
	}
	
	if(ei>si){
		//int mid = si + (ei - si) / 2;
		int mid = si + (ei - si) / 2;
		string s1 = commonPrefix(s, si, mid);
		string s2 = commonPrefix(s, mid+1, ei);
		
		return (helper(s1, s2));
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		string s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		
		string ans = commonPrefix(s, 0, n-1);
		
		if(ans.length()){
			cout<<ans<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
		
	}
	
	return 0;
}
