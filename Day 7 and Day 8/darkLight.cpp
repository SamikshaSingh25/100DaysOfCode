#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	int t,k,n;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(k==0){
	        if(n%4==0)
	        cout<<"Off"<<endl;
	        else
	        cout<<"On"<<endl;
	    }
	    else{
	        if(n%4==0)
	        cout<<"On"<<endl;
	        else
	        cout<<"Ambiguous"<<endl;
	    }
	}
	return 0;
}