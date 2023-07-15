#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int t1,t2,r1,r2;
	    cin>>t1>>t2>>r1>>r2;
	    if ((pow(t1 , 2)/pow(r1 , 3))==(pow(t2 , 2)/pow(r2 , 3))){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
