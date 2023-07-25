#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    string s;
	    cin>>s;
	    unordered_set<int> v;
	    v.insert(y);
	    for(int i=0;i<x;i++)
	    {
	        if(s[i]=='R'){
	            y=y+1;
	            v.insert(y);
	        }
	        else{
	         y=y-1;
	         v.insert(y);
	        }
	    }
	    cout<<v.size()<<endl;
	}
	return 0;
}