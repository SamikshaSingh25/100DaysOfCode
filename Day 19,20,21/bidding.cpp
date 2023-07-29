#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b&&a>c)
	    cout<<"alice"<<endl;
	    if(b>a&&b>c)
	    cout<<"bob"<<endl;
	    if(c>a&&c>b)
	    cout<<"charlie"<<endl;
	}
	return 0;
}