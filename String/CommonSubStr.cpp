/*	Question: Longest Common Substring
	Link: https://practice.geeksforgeeks.org/problems/longest-common-substring/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int LCS(string s1, string s2, int m, int n){
	int result=0;
	int len[2][n];
	int curRow=0;
	
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0){
				len[curRow][j]=0;
			}
			
			else if(s1[i-1]==s2[j-1]){
				len[curRow][j] = len[1-curRow][j-1] + 1;
				result = max(result, len[curRow][j]);
				
			}
			else{
				len[curRow][j]=0;
			}
		}
		curRow = 1 - curRow;
	}
	return result;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll m,n;
		cin>>m>>n;
		string s1,s2;
		cin>>s1>>s2;
		
		cout<<LCS(s1, s2, m, n)<<endl;
	}
	return 0;
}
