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
	    for(int i=1; i<=n;i++){
	        n-=i;
	        if(n>=0){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
