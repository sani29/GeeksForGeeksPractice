/*	Question: Implement strstr
	Link: https://practice.geeksforgeeks.org/problems/implement-strstr/1
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int strstr(string s, string x)
{
     return s.find(x);
}

int main() 
{
	int t;
	cin>>t;
	while(t--){
		string str,x; 
		cin>>str>>x;
	    cout<<strstr(str,x)<<endl; 
	}
    return 0; 
}
