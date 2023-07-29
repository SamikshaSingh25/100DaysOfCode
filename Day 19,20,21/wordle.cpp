#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        string s,t;
         int i;
        cin>>s>>t;
        for(i=0;i<5;i++)
        {
            if(s[i]==t[i])
            {
            cout<<"G";
            }
            else
            {
                cout<<"B";
            }
        }cout<<endl;
    }
	// your code goes here
	return 0;
}
