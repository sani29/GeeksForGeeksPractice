/* Question: Pythagorean Triplet
	Link: https://practice.geeksforgeeks.org/problems/pythagorean-triplet/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isTriplet(int a[],int n){
    
    for(int i =0;i<n;i++){
    
        a[i] = a[i]*a[i];
    }
    sort(a,a+n);
    
    for(int i =n-1;i>=2;i--){
        
        int l =0;
        int r =i-1;
        
        while(l<r){
        
            if(a[l]+a[r]==a[i])
                return true;
            
            (a[l]+a[r]<a[i])?l++ : r--;
        
        }
    }
    return false;
}

int main()
 {
 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
     long long int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        int a[n];
	   for(int i=0;i<n;i++){
	   	cin>>a[i];
	   }
	   if(isTriplet(a,n) == true){
	   	cout<<"Yes"<<"\n";
	   }
	   else{
	   	cout<<"No"<<"\n";
	   }
	   	
	}
	return 0;
}
