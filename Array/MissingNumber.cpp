/* Question: Missing number in array
	Link: https://practice.geeksforgeeks.org/problems/missing-number-in-array/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
 {
    ll t;
    cin>>t;
    while(t--){
        ll n, sum=0, total;
        cin>>n;
        int a[100000];
        total  = (n)*(n+1)/2;
        for(ll i=0; i<n-1;i++){
            cin>>a[i];
            total -= a[i];
        }
        
        cout<<total<<endl;
        
        
    }
	return 0;
}
