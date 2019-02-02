/* Question: Leaders in an array
	Link: https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int a[100000];
		stack<ll> s;
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		s.push(a[n-1]);
		for(ll i=n-2;i>=0;i--){
			if(a[i]>=s.top()){
				s.push(a[i]);
			}
		}
		while(!s.empty()){
			cout<<s.top()<<" ";
			s.pop();
		}
		cout<<endl;
	}
	return 0;
}
