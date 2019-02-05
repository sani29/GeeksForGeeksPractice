/*	Question: Permutations of a given string
	Link: https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void permute(string str) 
{ 
    sort(str.begin(), str.end()); 
  
    do { 
       cout << str << " "; 
    } while (next_permutation(str.begin(), str.end())); 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		permute(s);
		cout<<endl;
	}
	return 0;
}
