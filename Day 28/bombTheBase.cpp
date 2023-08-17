#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    int count=0;
	    for(int i=n-1; i>=0; i--){
	        if(a[i]<x){
	            count = i+1;
	            break;
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}