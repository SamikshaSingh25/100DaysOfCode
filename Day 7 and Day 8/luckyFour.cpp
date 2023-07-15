#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    while(n>0){
	        if(n%10==4){
	            count=count+1;
	        }
	        n=n/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
