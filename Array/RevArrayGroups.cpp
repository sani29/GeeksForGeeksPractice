/* Question: Reverse array in groups
	Link: https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0
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
		ll arr[100000];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		for (int i = 0; i < n; i += k) 
		{ 
	        ll left = i; 
	        
		   // to handle case when k is not multiple of n 
	        ll right = min(i + k - 1, n - 1); 
	        
		   // reverse the sub-array [left, right] 
		   while (left < right) 
		   	swap(arr[left++], arr[right--]); 
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
