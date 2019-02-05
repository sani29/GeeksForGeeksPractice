/*	Question: Longest Distinct characters in string
	Link: https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count=0, max=INT_MIN, j=0;
		unordered_set<char> us;
		for(int i=0;i<=s.length();i++){
			if(us.find(s[i])== us.end() && s[i]!='\0'){
				us.insert(s[i]);
				count++;
			}
			else{
				if(count>max){
					max=count;
				}
				us.erase(us.begin(),us.end());
				count=1;
				j++;
				i = j;
				us.insert(s[i]);
			}
		}
	}
	return 0;
}
