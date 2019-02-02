/* Question: Find the element that appears once in sorted array
	Link: https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array/0
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
	   for(ll i=0;i<n;i++){
	   	cin>>a[i];
	   }
	   ll ans = a[0];
	   for(ll i=1;i<n;i++){
	   	ans ^=a[i];
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
