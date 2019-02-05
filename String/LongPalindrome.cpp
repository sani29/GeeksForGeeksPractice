/*	Question: Longest Palindrome in a String
	Link: https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		int len = s.length();
		
		int maxLen = 1, start=0;
		int low, high;
		
		for(int i=1;i<len;i++){
			
			// for even length palindrome;
			low = i-1;
			high = i;
			while(low>=0 && high<len && s[low]==s[high]){
				if(high-low+1 > maxLen){
					maxLen = high-low+1;
					start = low;
				}
				--low;
				++high;
			}
			
			// for odd length palindrome
			low = i-1;
			high = i+1;
			while(low>=0 && high<len && s[low]==s[high]){
				if(high-low+1 > maxLen){
					maxLen = high-low+1;
					start = low;
				}
				--low;
				++high;
			}
			
		}
		
		for(int i=start;i<start+maxLen;i++){
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}

// solution with explanation is also here: https://www.geeksforgeeks.org/longest-palindromic-substring-set-2/
