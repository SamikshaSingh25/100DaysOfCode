#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int k;
	cin>>k;
	while(k--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n;)
	    {
	        if(i<n)
	        for(int j = i*n+1;j<=i*n+n;j++){
	            cout<<j<<" ";}
	        cout<<endl;
	        
	        if(i+1<n)
	        for(int j= i*n+2*n;j>i*n+n;j--){
	            cout<<j<<" ";}
	        cout<<endl;
	        
	        i+=2;
	    }
	}
	return 0;
}
