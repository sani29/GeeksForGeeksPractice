/* Question: Sorting Elements of an Array by Frequency
	Link: https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool compare(pair<int,int> &p1, 
             pair<int, int> &p2) 
{
    if (p1.second == p2.second) 
        return p1.first < p2.first; 
    return p1.second > p2.second; 
} 
 

int main()
 {
 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        int a[1000];
	   map<int,int> m;
	   for(int i=0;i<n;i++){
	   	cin>>a[i];
	   }
	   for(int i=0;i<n;i++){
	   	m[a[i]]++;
	   }
	   int s = m.size();
	   pair <int, int> p[s];
	   
	   int i=0;
	   for (auto it = m.begin(); it != m.end(); ++it) 
        	p[i++] = make_pair(it->first, it->second); 
     	
	   sort(p, p + s, compare);
	   for (int i = 0; i < s; i++) 
	    { 
	        int freq = p[i].second; 
	        while (freq--) 
	            cout << p[i].first << " "; 
	    }
	   cout<<endl;
	}
	return 0;
}
