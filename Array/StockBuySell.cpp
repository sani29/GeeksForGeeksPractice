/* Question: Stock buy and sell
	Link: https://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0
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
     while(t--){
         int n;
         cin>>n;
         int a[10000];
         vector<pair<int,int> > ans;
         for(int i=0;i<n;i++){
             cin>>a[i];
         }
         int si=0,ei=0;
         a[n]=-100;
         for(int i=1;i<=n;i++){
             if(a[i]-a[i-1]>0){
                 ei++;
             }
             else{
                 if(si!=ei)
                     ans.push_back(make_pair(si,ei));
                 si=i;
                 ei=i;
             }
         }
         if(ans.size()){
        	for(auto i:ans){
        		cout<<"("<<i.first<<" "<<i.second<<") ";
        	}
        }else cout<<"No Profit";

        cout<<endl; 
     }
	return 0;
}
