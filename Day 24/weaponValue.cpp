#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    for(int j=1;j<n;j++)
	    {
    	    for(int i=0;i<10;i++)
    	    {
    	         if((s[0][i]=='1')&&(s[j][i]=='1')||(s[0][i]=='0')&&(s[j][i]=='0'))
    	         {
    	             s[0][i]='0';
    	         }
    	       else
    	         s[0][i]='1';
    	    }
	    }
	    
	    int c=0;
	    for(int i=0;i<10;i++)
	    {
	        if(s[0][i]=='1')
	        c++;
	    }
	    cout<<c<<endl;
	    c=0;
	  
	}
	return 0;
}