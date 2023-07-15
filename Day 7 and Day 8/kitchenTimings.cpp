#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n], b[n];
	    int count=0;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    for(int i=1;i<n;i++){
	       if(a[i]-a[i-1] < b[i]){
	           count++;
	       }
	    }
	    
	    if(a[0]<b[0]){
	        count++;
	    }
	    
	    cout << n-count << endl;
	}
	return 0;
}