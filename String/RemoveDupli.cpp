/*	Question: Remove Duplicates
	Link: https://practice.geeksforgeeks.org/problems/remove-duplicates/0
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,hash[256];
    string str;
    cin>>t;
    cin >> ws;
    while(t--){
    	
        memset(hash,0,sizeof(hash));
       getline(cin,str);
       cin >> ws;
        for(i=0;i<str.size();i++){
            if(hash[str[i]]==0)
            {
                cout<<str[i];
                hash[str[i]]++;
            }
        }
        cout<<"\n";
    }
    return 0;
}
