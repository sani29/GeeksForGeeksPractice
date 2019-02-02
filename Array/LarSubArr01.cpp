/* Question: Largest subarray of 0's and 1's
	Link: https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int maxLen(int arr[], int n)
{
    unordered_map<int,int> umap;
    int k=0,max=0;
    umap[0]=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==1)   k++;
        else if(arr[i]==0)  k--;
        if(umap.find(k)==umap.end())    umap[k]=i;
        else{
            if(i-umap[k]>max)   max=i-umap[k];
        }
    }
    return max;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int maxi = maxLen(a,n);
		cout<<maxi<<endl;
	}
	return 0;
}
