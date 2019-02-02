/* Question: Sort an array of 0s, 1s and 2s
	Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
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
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll si=0,mid=0,ei=n-1;
		while(mid<=ei){
			
			switch(a[mid]){
				case 0:
					swap(a[si++],a[mid++]);
					break;
				case 1:
					mid++;
					break;
				case 2:
					swap(a[mid],a[ei--]);
					break;
			}
			
		}
		for(ll i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
