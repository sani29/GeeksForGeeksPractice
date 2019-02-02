/* Question: Equilibrium point
	Link: https://practice.geeksforgeeks.org/problems/equilibrium-point/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,sum=0,sum1=0,count=0;
		int a[1000000];
		cin>>n;
		for(ll i=1;i<n+1;i++){
			cin>>a[i];
			if(i==n){
				sum1 = a[i];
			}
			else{
				sum += a[i];
			}
		}
		if(n==1){
			count=1;
			cout<<1<<endl;
		}
		else{
			for(ll i=n-1;i>0;i--){
				sum -= a[i];
				if(sum1==sum){
					count=1;
					cout<<i<<endl;
					break;
				}
				sum1 += a[i];
			}
		}
		if(count==0){
			cout<<-1<<endl;
		}
	}
	return 0;
}
