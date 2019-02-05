/*	Question: Reverse words in a given string
	Link: https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0
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
		ll i=0;
		ll j=s.length()-1, len = s.length();
		
		while(i<j){
			char temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			i++; j--;
		}
		//cout<<s<<endl;
		ll count=-1,l=0;
		for(ll k=0;k<len+1;k++){
			if(s[k] == '.' || k==len){
				while(l<count){
					char temp = s[l];
					s[l] = s[count];
					s[count] = temp;
					l++; count--;
				}
				l=k+1;
				count=k;
			}
			else{
				count++;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
