/*	Question: Recursively remove all adjacent duplicates
	Link: https://practice.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates/0
*/

// This solutions fails for "mississipie"
// expected ouput: mpie
// actual output : mipie

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char* helper(char *s, char *lastRemove){
	
	if(s[0]=='\0' || s[1]=='\0'){
		return s;
	}
	
	if(s[0]==s[1]){
		*lastRemove = s[0];
		while(s[1] && s[1]==s[0])
			s++;
		s++;
		return helper(s, lastRemove);
	}
	
	char* remStr = helper(s+1, lastRemove);
	
	if(remStr[0] && remStr[0]==s[0]){
		*lastRemove = s[0];
		return (remStr+1);
	}
	
	if(remStr[0]=='\0' && *lastRemove == s[0]){
		return remStr;
	}
	
	remStr--;
	remStr[0] = s[0];
	return remStr;
	//return s;
	
}

char *remove(char *s){
	char lastRemove = '\0';
	return helper(s, &lastRemove);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		char s[50];
		cin>>s;
		
		cout<<remove(s)<<endl;
	}
	return 0;
}
