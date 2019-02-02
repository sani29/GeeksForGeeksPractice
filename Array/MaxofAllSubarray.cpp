/* Question: Maximum of all subarrays of size k
	Link: https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll a[1000000];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll maxi = INT_MIN;
		for(ll i=0;i<=n-k;i++){
			maxi = a[i];
			for(ll j=i+1;j<i+k;j++){
				if(a[j]>maxi){
					maxi = a[j];
				}
			}
			cout<<maxi<<" ";
		}
		cout<<endl;
	}
	return 0;
}
