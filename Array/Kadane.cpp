/* Question: Kadane's Algorithm
	Link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
 {
     int t;
     cin>>t;
     while(t--){
         ll n;
         cin>>n;
         int a[1000000];
         for(ll i=0;i<n;i++){
             cin>>a[i];
         }
         ll tillSum=0, maxSoFar = INT_MIN;
         
         for(ll i=0;i<n;i++){
             
             tillSum += a[i];
             
             if(maxSoFar < tillSum){
                 maxSoFar = tillSum;
             }
             if(tillSum < 0){
                 tillSum = 0;
             }
         }
         cout<<maxSoFar<<endl;
     }
 
	return 0;
}
