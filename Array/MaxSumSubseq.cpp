/* Question: Maximum sum increasing subsequence
	Link: https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,maxi=0;
		cin>>n;
		int a[1000000], b[1000000];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		
		for(ll i=0;i<n;i++){
			b[i]=a[i];
		}
		for(ll i=1;i<n;i++){
			for(ll j=0;j<i;j++){
				if(a[i]>a[j] && b[i]< a[i]+b[j]){
					b[i] = a[i]+b[j];
				}
			}
		}
		for(ll i=0;i<n;i++){
			if(maxi<b[i]){
			    maxi = b[i];
			}
		}
		cout<<maxi<<endl;
	}
	return 0;
}
