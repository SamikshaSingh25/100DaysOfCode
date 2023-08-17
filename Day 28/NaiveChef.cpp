#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    int A[n];
	     float c=0;
	     float B=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>A[i];
	        if(A[i]==a)
	        {
	            c++;
	        }
	         if(A[i]==b)
	        {
	            B++;
	        }
	    }
	    float ans = (c/n)*(B/n);
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}