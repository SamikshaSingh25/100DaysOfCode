#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<((n-1)*(n))/2<<endl;
	}
	return 0;
}