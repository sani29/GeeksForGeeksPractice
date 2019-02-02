/* Question: Element with left side smaller and right side greater
	Link: https://practice.geeksforgeeks.org/problems/unsorted-array/0
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
        int a[1000000],count=0;
	   for(ll i=0;i<n;i++){
	   	cin>>a[i];
	   }
	   int rightMin[1000000];
	   rightMin[n-1] = a[n-1];
	   
	   for(ll i=n-2;i>=0;i--){
	   	rightMin[i] = min(rightMin[i+1], a[i+1]);
	   }
	   
	   int leftMax = a[0];
	   for(ll i=1;i<n-1;i++){
	   	if(rightMin[i]>=a[i] && leftMax<=a[i]){
	   		count=1;
	   		cout<<a[i];
	   		break;
		   }
		
		leftMax = max(a[i], leftMax);
	   }
	   if(count==0){
	   	cout<<-1;
	   }
	 cout<<endl;  
	}
	return 0;
}
