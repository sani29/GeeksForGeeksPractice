/* Question: Subarray with given sum
	Link: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,s,sum=0, si=0,ei=0,st=1;
		cin>>n>>s;
		int a[100000];
		for(ll i=1;i<n+1;i++){
			cin>>a[i];
		}
		sum = a[1];
		
		for(ll i=2;i<=n+1;i++){
			while(sum>s && st< i-1){
				sum -= a[st];
				st++;
			}
			if(sum == s){
				si = st;
				ei = i-1;
				cout<<st<<" "<<ei<<endl;
				break;
			}
			if(i<=n){
				sum += a[i];
			}
			
		}
		if(ei==0){
			cout<<-1<<endl;
		}
	}
	return 0;
}
