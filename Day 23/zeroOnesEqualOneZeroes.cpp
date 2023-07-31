#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    s += '0';
	    for(int i = 1; i < n-1; i++){
	        s += '1';
	    }
	    s += '0';
	    cout<<s<<endl;
	}
	return 0;
}
