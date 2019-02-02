/* Question: Kth largest element in a stream
	Link: https://practice.geeksforgeeks.org/problems/kth-largest-element-in-a-stream/0
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
	    int n,k,x=0;
	    cin>>k>>n;
	    
	   vector<int> v;
	   
	   for(int i=0;i<n;i++){
	       int temp;
	       cin>>temp;
	       
	       if(i<k){
	           v.push_back(temp);
	           sort(v.begin(),v.end());
	           
	           if(i==k-1)
	           cout<<v[0]<<" ";
	           else
	           cout<<"-1 ";
	       }
	       else{
	           if(temp<v[x])
	           cout<<v[x]<<" ";

                else{
                 x++;
	           v.push_back(temp);
	           sort(v.begin()+1,v.end());
	           cout<<v[x]<<" ";
                }
	           
	       }
	       
	   }
	   cout<<endl;
	}
	
	return 0;
}
