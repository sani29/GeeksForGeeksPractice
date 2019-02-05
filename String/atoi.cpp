/*	Question: Implement Atoi
	Link: https://practice.geeksforgeeks.org/problems/implement-atoi/1
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool isNumericChar(char x) 
{ 
    return (x >= '0' && x <= '9')? true: false; 
} 
   
int atoi(string str) 
{ 
   
    int res = 0;
    int sign = 1;  // Initialize sign as positive 
    int i = 0;
   
    // If number is negative, then update sign 
    if (str[0] == '-') { 
        sign = -1; 
        i++;
    } 
   
    for (; i<str.length(); ++i) 
    { 
        if (!isNumericChar(str[i])) 
            return -1; // You may add some lines to write error message 
                      // to error stream 
        res = res*10 + str[i] - '0'; 
    } 
   
    return sign*res; 
} 
   

int main() 
{
	int t;
	cin>>t;
	while(t--){
		string str; 
		cin>>str;
	    cout<<atoi(str)<<endl; 
	}
    return 0; 
} 
