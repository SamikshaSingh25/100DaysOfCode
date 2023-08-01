#include <bits/stdc++.h>
using namespace std;

int main() {
int t,n;
cin>>t;
while(t--)
{
    cin>>n;
   int a[2*n];
	    for(int i=0;i<2*n;i++)
	        cin>>a[i];
	    
	    sort(a,a+2*n);
	    int mini = INT_MAX;
	    for(int i=0;i<=n;i++){
	        mini = min(mini , a[n+i-1] - a[i]);
	    }
	    cout<<mini<<endl;
	    
	}
	return 0;
}