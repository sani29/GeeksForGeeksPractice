/*	Question: Permutations of a given string
	Link: https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0
*/

// To print only distinct permutations

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/* Function to swap values at two pointers */
void swap(char *x, char *y) 
{ 
	char temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
} 

/* Function to print permutations of string 
This function takes three parameters: 
1. String 
2. Starting index of the string 
3. Ending index of the string. */
void permute(char *a, int l, int r, set<string>&s1) 
{ 
	int i; 
	if (l == r) 
	    s1.insert(a);
	else{ 
		for (i = l; i <= r; i++) 
		{ 
			swap((a+l), (a+i)); 
			permute(a, l+1, r,s1); 
			swap((a+l), (a+i)); //backtrack 
		} 
	} 
} 

int main()
 {
	int t;cin>>t;
	while(t--){
	    char str[1000];cin>>str;
	    set<string>s1;
	    permute(str, 0,strlen(str)-1,s1);
	    for(auto it=s1.begin();it!=s1.end();it++)cout<<(*it)<<" ";
	    cout<<endl;
	}
	return 0;
}
