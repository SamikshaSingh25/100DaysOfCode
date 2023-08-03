#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>y){
	        cout<<"LOSS"<<endl;
	    }
	    else if(x<y){
	        cout<<"PROFIT"<<endl;
	    }
	    else{
	        cout<<"NEUTRAL"<<endl;
	    }
	}
	return 0;
}
