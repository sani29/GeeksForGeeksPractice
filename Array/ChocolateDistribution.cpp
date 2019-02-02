/* Question: Chocolate Distribution Problem
	Link: https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0
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
	   cin>>m;
	   sort(a,a+n);
	   ll mini = INT_MAX;
	   for(ll i=0;i<n-m+1;i++){
	   	ll res;
	   	 res = a[i+m-1] - a[i];
	   	 if(res<mini){
	   	 	mini = res;
		}
	   }
	   cout<<mini<<endl;	
	}
	return 0;
}
