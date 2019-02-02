/* Question: Largest Number formed from an Array
	Link: https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array/0
*/

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long ll;

bool compare(int a, int b){
	string aS = to_string(a);
	string bS = to_string(b); 
	
	return (aS + bS > bS + aS);
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int a[n];
		string s;
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a, a+n, compare);
		for(ll i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
		
	}
	return 0;
}
