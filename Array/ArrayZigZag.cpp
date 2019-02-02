/* Question: Convert array into Zig-Zag fashion
	Link: https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
 {
 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	
     int t;
     cin>>t;
     while(t--)
     {
        ll n,m;
        cin>>n;
        int a[100000];
	   for(ll i=1;i<=n;i++){
	   	cin>>a[i];
	   }
	   for(ll i=1;i<n;i++){
	   	if(i%2==0){
	   		if(a[i]<a[i+1]){
	   			swap(a[i],a[i+1]);
			}
		}
		else{
			if(a[i]>a[i+1]){
				swap(a[i],a[i+1]);
			}
		}
	   }
	   for(ll i=1;i<=n;i++){
	   	cout<<a[i]<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}

