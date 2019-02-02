/* Question: Relative Sorting
	Link: https://practice.geeksforgeeks.org/problems/relative-sorting/0
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
        ll n1,n2;
        cin>>n1>>n2;
        int a[100000], b[100000],c[100000];
	   for(ll i=0;i<n1;i++){
	   	cin>>a[i];
	   }
	   for(ll i=0;i<n2;i++){
	   	cin>>b[i];
	   }
	   int m1[100000] = {0};
	   for(ll i=0;i<n1;i++){
	   	m1[a[i]]++;
	   }
	   ll count=0;
		for(ll i=0;i<n2;i++){
	        count=m1[b[i]];
	        for(int j=0;j<count;j++){
	            cout<<b[i]<<" ";
	            m1[b[i]]--;
	        }
	        //count=0;
	    }
	   ll t=0;
	   for(ll i=0;i<n1;i++){
	       if(m1[a[i]]!=0){
	           c[t]=a[i];
	           t++;
	       }
	   }    
	   sort(c,c+t);
	   for(ll i=0;i<t;i++){
	   	cout<<c[i]<<" ";
	   }
	   cout<<endl;
	    
	}
	return 0;
}
