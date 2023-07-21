#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int mx= INT_MIN;
	    int mn=INT_MAX;
	    int curr=1;
	    for(int i=1;i<n;i++){
	        if(a[i]-a[i-1]<=2){
	            curr++;
	        }
	        else{
	            mx=max(mx,curr);
	            mn=min(mn,curr);
	            curr=1;
	        }
	        
	    }
	    
	    if(curr!=0){
	        mx=max(mx,curr);
	        mn=min(mn,curr);
	    }
	   cout<<mn<<" "<<mx<<endl;
	}
	return 0;
}
