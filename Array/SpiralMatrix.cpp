/* Question: Spirally traversing a matrix
	Link: https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;

int main()
 {
 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	
     int t;
     cin>>t;
     while(t--){
         int r,c;
         cin>>r>>c;
         int a[100][100];
         for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){
                 cin>>a[i][j];
             }
         }
         int r1=0,c1=0;
         while(r1<r && c1<c){
             for(int i=c1;i<c;i++){
                 cout<<a[r1][i]<<" ";
             }
             r1++;
             
             for(int i=r1;i<r;i++){
                 cout<<a[i][c-1]<<" ";
             }
             c--;
             
             if(r1<r){
                 for(int i=c-1;i>=c1;i--){
                     cout<<a[r-1][i]<<" ";
                 }
                 r--;
            }
            
             if(c1<c){
                 for(int i=r-1;i>=r1;i--){
                     cout<<a[i][c1]<<" ";
                 }
                c1++;
             }
             
         }
         cout<<endl;
     }
	return 0;
}
