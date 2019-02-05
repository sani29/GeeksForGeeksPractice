/*	Question: Check if string is rotated by two places
	Link: https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places/0
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b,temp1,temp2;
	    cin>>a;
	    cin>>b;
	    int n = a.length();
	    int i=n-2, j = 2, c=0, d=0;
	    
	    while(c!=n){
	        temp1 += b[i];
	        i = (i+1)%n;
	        c++;
	    }
	    while(d!=n){
	       temp2 += b[j];
	       j = (j+1)%n;
	       d++;
	    }
	    if(!temp1.compare(a) || !temp2.compare(a)){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	    
	}
	return 0;
}
