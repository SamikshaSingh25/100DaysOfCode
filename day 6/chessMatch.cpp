#include <iostream>
using namespace std;

int main() {
	int t; 
	cin>>t;
	while(t--){
	    int n, a, b;
	    cin>>n>>a>>b;
	    
	    int m , k;
	    m  = 2*(180 + (n));
	    k = a+b;
	    
	    cout<<m-k<<endl;
	}
	return 0;
}