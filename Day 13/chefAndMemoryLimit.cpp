#include <iostream>
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
	    
	    long sum=a[0];
	    for(int i=1 ; i<n; i++){
	        if(a[i]>a[i-1]){
	            sum = sum + (a[i]-a[i-1]);
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
