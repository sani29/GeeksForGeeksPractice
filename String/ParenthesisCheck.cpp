/*	Question: Parenthesis Checker
	Link: https://practice.geeksforgeeks.org/problems/parenthesis-checker/0
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
		int count=0;
		stack<char> st;
		for(int i=0;i<s.length();i++){
			if(s[i]=='[' || s[i]=='{' || s[i]=='('){
				st.push(s[i]);
				continue;
			}
			if(st.empty()){
				count=1;
				break;
			}
			if((s[i]==']' && st.top() == '[') || (s[i]=='}' && st.top() == '{' )|| (s[i]==')' && st.top() == '(')){
				st.pop();
			}
			else{
				break;
			}
		}
		if(!st.empty() || count==1){
			cout<<"not balanced"<<endl;
		}
		else{
			cout<<"balanced"<<endl;
		}
	}
	return 0;
}
